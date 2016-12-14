#include "lchild.h"



LChild::LChild(QWidget *parent) : QMdiSubWindow(parent)
{
    QLabel *blank = new QLabel;
    log = new Login();
    this->setWidget(log);
    log->setGeometry(0,0,1280,720);
    log->setFixedSize(1280,720);
    log->show();

    this->setStyleSheet(" #centralWidget{background-image:url(:/res/images/bg1.png);}");
//    this->setStyleSheet("background-color: blue;");
    QLabel *back = new QLabel(this);
    back->setGeometry(0,0,1280,720);
//    back->setStyleSheet("background-color: white;");
    back->setStyleSheet("background-image:url(:/res/images/bg1.png);");
    back->lower();
}
