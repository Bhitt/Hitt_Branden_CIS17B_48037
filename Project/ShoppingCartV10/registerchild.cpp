#include "registerchild.h"
#include "ui_registerchild.h"

void RegisterChild::closeEvent(QCloseEvent *closeEvent)
{
    //remember to set isReg to false in mainwindow
    emit clReg();
    closeEvent->accept();
}

RegisterChild::RegisterChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::RegisterChild)
{
    ui->setupUi(this);

    //set the password toggle to false
    passTog = false;

    //create connections to make sure all fields are filled
    connect(ui->nameEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));
    connect(ui->passEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));
    connect(ui->confirmEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));

    //create connections to make sure pass and confirm are the same
    connect(ui->passEdit,SIGNAL(textChanged(QString)),this,SLOT(passChck()));
    connect(ui->confirmEdit,SIGNAL(textChanged(QString)),this,SLOT(passChck()));

}

RegisterChild::~RegisterChild()
{
    delete ui;
}

QString RegisterChild::getOne()
{
    return ui->passEdit->text();
}

QString RegisterChild::getTwo()
{
    return ui->nameEdit->text();
}

void RegisterChild::setEChck(QString data)
{
    ui->Warning->setText(data);
}

void RegisterChild::setOne(QString data)
{
    ui->passEdit->setPlaceholderText(data);
    ui->confirmEdit->setPlaceholderText(data);
}

void RegisterChild::passChck()
{
    if(ui->passEdit->text() == ui->confirmEdit->text()) ui->Submit->setEnabled(true);
    else ui->Submit->setEnabled(false);
}

void RegisterChild::enableSubmit()
{
    //set the boo
    bool ok =  !ui->nameEdit->text().isEmpty()
            && !ui->passEdit->text().isEmpty()
            && !ui->confirmEdit->text().isEmpty();
    ui->Submit->setEnabled(ok);
}

void RegisterChild::showPass()
{
    if(passTog == false){
        this->ui->passEdit->setEchoMode(QLineEdit::Normal);     //show the password characters
        this->ui->confirmEdit->setEchoMode(QLineEdit::Normal);
        passTog=true;
    }else{
        this->ui->passEdit->setEchoMode(QLineEdit::Password);   //hide the password characters
        this->ui->confirmEdit->setEchoMode(QLineEdit::Password);
        passTog=false;
    }
}

void RegisterChild::on_Submit_clicked()
{
    qDebug() << "register submit pushed";
    emit submit();
}

void RegisterChild::on_Back_clicked()
{
    emit back();
}
