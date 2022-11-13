#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QWidget *widget;
    QPushButton *btn;
    QCheckBox *ckbox;
    QLabel *label;
    void onclick();
    void onCheck(int);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // QObject interface
protected:
    void timerEvent(QTimerEvent *event);
};
#endif // MAINWINDOW_H
