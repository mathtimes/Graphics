#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setMouseTracking(true);
    auto qbtn = new QPushButton("Quit",this);
    qbtn->setGeometry(50,25,100,50);
    connect(qbtn,&QPushButton::clicked,qApp,&QApplication::quit);
}

MainWindow::~MainWindow()
{

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int x = event->pos().x();
    int y = event->pos().y();
    this->statusBar()->showMessage("Position: ("+QString::number(x)+", "+QString::number(y)+")");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Escape)
        qApp->quit();
}

