#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender:public QObject
{
    Q_OBJECT
private:
    int age;
public:
    Sender();
    void addAge();
signals:
    void ageChanged(int val);
};

#endif // SENDER_H
