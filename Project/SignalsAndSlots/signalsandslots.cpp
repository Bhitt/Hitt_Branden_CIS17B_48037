#include "signalsandslots.h"
#include "ui_signalsandslots.h"

SignalsAndSlots::SignalsAndSlots(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignalsAndSlots)
{
    ui->setupUi(this);

    dialog = new Dialog(this);
    dialog->show();


    connect(ui->, SIGNAL(enterDoor()), this ,SLOT(changeRoom()));

}

SignalsAndSlots::~SignalsAndSlots()
{
    delete ui;
}

SignalsAndSlots::changeRoom()
{
    //do nothing
    this->setStyleSheet("background-color:black");
}
