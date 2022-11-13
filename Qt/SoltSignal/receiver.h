#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>

class Receiver:public QObject
{
    Q_OBJECT
public:
    Receiver();
public slots:
    void ageChanged(int age);
};

#endif // RECEIVER_H
