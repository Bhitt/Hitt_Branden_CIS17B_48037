#include "createchild.h"
#include "ui_createchild.h"

CreateChild::CreateChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::CreateChild)
{
    ui->setupUi(this);
}

CreateChild::~CreateChild()
{
    delete ui;
}

QString CreateChild::getQuestion()
{
    return ui->questionedit->text();
}

QString CreateChild::getAns1()
{
    return ui->poll1edit->text();
}

QString CreateChild::getAns2()
{
    return ui->poll2edit->text();
}

QString CreateChild::getAns3()
{
    return ui->poll3edit->text();
}

void CreateChild::on_submitbutton_clicked()
{
    emit goToSendPoll();

    ui->questionedit->clear();
    ui->poll1edit->clear();
    ui->poll2edit->clear();
    ui->poll3edit->clear();

//    QMessageBox::StandardButton reply;
    QMessageBox::question(this,"Confirm","Your Survey Was Created.",QMessageBox::Ok);
}

void CreateChild::on_returntomenu_clicked()
{

    emit crunchwrapsupreme();
}
