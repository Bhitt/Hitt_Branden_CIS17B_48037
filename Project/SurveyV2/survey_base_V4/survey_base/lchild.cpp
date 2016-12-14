#include "lchild.h"



LChild::LChild(QWidget *parent) : QMdiSubWindow(parent)
{
    log = new Login();
    this->setWidget(log);
    log->setGeometry(0,0,1280,720);
    log->setFixedSize(1280,720);
    log->show();

    this->setStyleSheet("QMdiSubWindow{background-image:url(:/res/images/bg2.jpg);}");
}
