#include "menuchild.h"
#include "ui_menuchild.h"

MenuChild::MenuChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::MenuChild)
{
    ui->setupUi(this);
}

MenuChild::~MenuChild()
{
    delete ui;
}

void MenuChild::on_pushButton_clicked() //Create survey button
{
    emit goToCreate();
}

void MenuChild::on_take_button_clicked() //take survey button
{
    //Grab the number of possible polls
    emit goToNum();
}
