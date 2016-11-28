#include "loginchild.h"
#include "ui_loginchild.h"

LoginChild::LoginChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::LoginChild)
{
    ui->setupUi(this);

    passTog=false;
    //set regular expressions for input
//    QRegExp rx1 ("[A-Za-z0-9_-]{6,18}");
//    QRegExp rx2 ("[A-Za-z0-9_-]{6,18}");
//    QRegExp rx2 ("^(?=.*?[A-Z])(?=.*?[a-z])(?=.*?[0-9])(?=.*?[#?!@$%^&*-]).{8,}$");
//    ui->nameEdit->setValidator(new QRegExpValidator(rx1,this));
//    ui->passEdit->setValidator(new QRegExpValidator(rx2,this));
//    if (rx.exactMatch(ui->nameEdit->text()))
//    {
//        ui->Submit->setEnabled(true);
//    }
//    else
//    {
//        ui->Submit->setEnabled(false);
//    }
}

LoginChild::~LoginChild()
{
    delete ui;
}

void LoginChild::setEChck(QString data)
{
    ui->eCheck->setText(data);
}

void LoginChild::setOne(QString data)
{
    ui->passEdit->setPlaceholderText(data);
}

QString LoginChild::getOne()
{
    return ui->passEdit->text();
}

QString LoginChild::getTwo()
{
    return ui->nameEdit->text();
}

void LoginChild::closeEvent(QCloseEvent *closeEvent)
{

    //set isLogin to false somehow
    emit closeLg();
    closeEvent->accept();

}

void LoginChild::showPass()
{
    if(passTog == false){
        this->ui->passEdit->setEchoMode(QLineEdit::Normal); //show the password characters
        passTog=true;
    }else{
        this->ui->passEdit->setEchoMode(QLineEdit::Password); //hide the password characters
        passTog=false;
    }

}

void LoginChild::subPush()
{
    emit sendNaPa(ui->nameEdit->text(),ui->passEdit->text());
}

void LoginChild::on_pushButton_2_clicked()
{
    emit beginReg();
}

void LoginChild::on_Submit_clicked()
{
    emit submit();
}
