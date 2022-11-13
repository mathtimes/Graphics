#include "mainwindow.h"

void MainWindow::onclick()
{
    statusBar()->showMessage("button clicked.");
}

void MainWindow::onCheck(int state)
{
    statusBar()->showMessage("");
    if(state==Qt::Checked){
        statusBar()->showMessage("ckecked");
        connect(btn,&QPushButton::clicked,this,&MainWindow::onclick);
    } else if(state==Qt::Unchecked){
        statusBar()->showMessage("unchecked");
        disconnect(btn,&QPushButton::clicked,this,&MainWindow::onclick);
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget = new QWidget(this);
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

MainWindow::~MainWindow()
{
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    label->setText(QTime::currentTime().toString());
}

