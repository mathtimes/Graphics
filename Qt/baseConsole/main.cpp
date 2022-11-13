#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"a->classname:"<<a.metaObject()->className();
    qDebug()<<"Program Path:"<<a.applicationFilePath();
    a.dumpObjectTree();
    a.dumpObjectInfo();
    return a.exec();
}
