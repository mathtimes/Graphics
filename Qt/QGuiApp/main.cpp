#include <QtGui>
#include <QWindow>

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    QWindow w;
    w.show();
    qGuiApp->dumpObjectTree();
    qGuiApp->dumpObjectInfo();
    return a.exec();
}
