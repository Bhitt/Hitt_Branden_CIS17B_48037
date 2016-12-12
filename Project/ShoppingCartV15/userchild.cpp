#include "userchild.h"
#include "ui_userchild.h"

UserChild::UserChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::UserChild)
{
    ui->setupUi(this);
}

UserChild::~UserChild()
{
    delete ui;
}

void UserChild::updateN(QString upd)
{
    ui->username->setText(upd);
    ui->username->setStyleSheet("color: #c2d3ed;");
}
