#pragma once

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QTime>
#include <QStatusBar>
#include <QHBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QWidget *widget;
    QPushButton *btn;
    QCheckBox *ckbox;
    QLabel *label;
    void pressed();
    void released();
    void onCheck(int);
    void timerEvent(QTimerEvent *event);

public:
    MainWindow(QWidget *parent = nullptr);

};
