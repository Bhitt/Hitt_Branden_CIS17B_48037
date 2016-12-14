#include "lchild.h"



LChild::LChild(QWidget *parent) : QMdiSubWindow(parent)
{
    log = new Login(this);
    this->setWidget(log);
    log->setGeometry(0,0,1280,720);
    log->setFixedSize(1280,720);
    log->show();
}
