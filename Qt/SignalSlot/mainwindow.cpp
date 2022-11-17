#include "mainwindow.h"

void MainWindow::pressed()
{
    statusBar()->showMessage("button pressed.");
}

void MainWindow::released()
{
    statusBar()->showMessage("button released.");
}

void MainWindow::onCheck(int state)
{
    statusBar()->showMessage("");
    if(state==Qt::Checked){
        statusBar()->showMessage("ckecked/connected");
        connect(btn,&QPushButton::pressed,this,&MainWindow::pressed);
        connect(btn,&QPushButton::released,this,&MainWindow::released);
    } else if(state==Qt::Unchecked){
        statusBar()->showMessage("unchecked/disconnected");
        disconnect(btn,&QPushButton::pressed,this,&MainWindow::pressed);
        disconnect(btn,&QPushButton::released,this,&MainWindow::released);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget(this); //中央Widget
    setCentralWidget(widget);
    btn = new QPushButton("Push me !",widget);
    ckbox = new QCheckBox("connect",widget);
    ckbox->setCheckState(Qt::Unchecked);
    label = new QLabel(QTime::currentTime().toString(),widget);

    auto layout = new QHBoxLayout(widget);
    layout->addWidget(btn);
    layout->addWidget(ckbox);
    layout->addWidget(label);

    statusBar()->showMessage("");

    startTimer(1000);

    connect(ckbox,&QCheckBox::stateChanged,this,&MainWindow::onCheck);
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    label->setText(QTime::currentTime().toString());
}

