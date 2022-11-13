#include "receiver.h"
#include <QDebug>

Receiver::Receiver()
{

}

void Receiver::ageChanged(int age)
{
    qDebug()<<"age:"<<age;
}
