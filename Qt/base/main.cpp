#include <QApplication>
#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.show();
    w.dumpObjectTree();
    w.dumpObjectInfo();
    return a.exec();
}
