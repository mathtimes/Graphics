#include "sender.h"

Sender::Sender()
{
    age = 10;
}

void Sender::addAge()
{
    age++;
    emit ageChanged(age);
}
