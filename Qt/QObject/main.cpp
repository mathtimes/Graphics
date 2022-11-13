#include <QCoreApplication>
#include <QObject>
class A:public QObject
{
public:
    ~A(){
        qDebug()<<this<<"被销毁";
    };
    A(QObject*parent):QObject(parent){
        qDebug()<<this<<"被构造";
    }
};
int main(int argc,char*argv[]){
    A objA(nullptr);
    //A objAcopy(objA);
    A*pA2=new A(&objA);
    //objA=*objA2;
    A*pA3=new A(pA2);
    A*pA4=new A(pA2);
    objA.setObjectName("A1");
    pA2->setObjectName("A2");
    pA3->setObjectName("A3");
    pA4->setObjectName("A4");
    objA.dumpObjectTree();
}
