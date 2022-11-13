#include <QCoreApplication>
#include <sender.h>
#include <receiver.h>

int main(int argc, char *argv[])
{
    Sender senderObj;
    Receiver receiverObj;
    senderObj.addAge();
    senderObj.addAge();
    QObject::connect(&senderObj,&Sender::ageChanged,&receiverObj,&Receiver::ageChanged);
    senderObj.addAge();
    senderObj.addAge();
    QObject::disconnect(&senderObj,&Sender::ageChanged,&receiverObj,&Receiver::ageChanged);
    senderObj.addAge();
    return 0;
}
