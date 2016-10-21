#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //connect
//    connect(this, SIGNAL(enterDoor()), w ,SLOT(changeRoom()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::recolor()
{
    this->setStyleSheet("background-color:black");
    enterDoor();

}
