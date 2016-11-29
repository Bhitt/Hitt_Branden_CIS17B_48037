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

    //set the regular expressions
//    QRegularExpression passRegEx ("^((?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%]).{6,20})$");

    //create connections to make sure all fields are filled
    connect(ui->nameEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));
    connect(ui->passEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));
    connect(ui->confirmEdit,SIGNAL(textChanged(QString)),this,SLOT(enableSubmit()));

    //create connections to make sure pass and confirm are the same
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

bool RegisterChild::regEx()
{
    //http://stackoverflow.com/questions/12018245/regular-expression-to-validate-username

    //Regular Expressions to match
    QRegularExpression passRegEx ("^((?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%]).{6,20})$");
    QRegularExpression nameRegEx ("^(?=.{8,20}$)(?![_.])(?!.*[_.]{2})[a-zA-Z0-9._]+(?<![_.])$");
    //bools
    bool one = false, two = false;
    //check password
    passMatch = passRegEx.match(ui->passEdit->text());
    qDebug() << "passMatch.hasMatch() = " << passMatch.hasMatch();
    one = passMatch.hasMatch();
    //check name
    nameMatch = nameRegEx.match(ui->nameEdit->text());
    qDebug() << "nameMatch.hasMatch() = " << nameMatch.hasMatch();
    two = nameMatch.hasMatch();

    //return results
    if(one && two) return true;
    else return false;
}

void RegisterChild::passChck()
{
    if(ui->passEdit->text() == ui->confirmEdit->text()) ui->Submit->setEnabled(true);
    else ui->Submit->setEnabled(false);
}

void RegisterChild::enableSubmit()
{
    //set the bools
    bool ok1 =false, ok2=false, ok3 = false;
    //check to make sure all fields are filled
    ok1 =  !ui->nameEdit->text().isEmpty()
            && !ui->passEdit->text().isEmpty()
            && !ui->confirmEdit->text().isEmpty();

    //check to make sure the two passwords are the same
    if(ui->passEdit->text() == ui->confirmEdit->text()) ok2=true;
    else ok2 = false;

    //check regular expressions
    if(ok1 && ok2) ok3 = regEx();

    //set the submit to enabled or not enabled
    if(ok1 && ok2 && ok3) ui->Submit->setEnabled(true);
    else ui->Submit->setEnabled(false);
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
