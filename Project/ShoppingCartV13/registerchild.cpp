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
    QRegularExpression *passRegEx = new QRegularExpression("^((?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[#?!@$%^&*-]).{6,20})$");
    QRegularExpression *nameRegEx = new QRegularExpression("^(?=.{6,20}$)(?![_.])(?!.*[_.]{2})[a-zA-Z0-9._]+(?<![_.])$");
    //bools
    bool one = false, two = false;
    //check password
    QRegularExpressionMatch *passMatch = new QRegularExpressionMatch(passRegEx->match(ui->passEdit->text()));
    one = passMatch->hasMatch();
    //check name
    QRegularExpressionMatch *nameMatch = new QRegularExpressionMatch(nameRegEx->match(ui->nameEdit->text()));
    two = nameMatch->hasMatch();

    //return results
    if(one && two) return true;
    else return false;
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
    if(ok1 && ok2 && ok3){
        ui->Submit->setEnabled(true);
        ui->toolButton->setStyleSheet("");
    }
    else{
        ui->toolButton->setStyleSheet(tr("background-color: rgb(255, 0, 0);"));
        ui->Submit->setEnabled(false);
    }
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
    emit submit();
}

void RegisterChild::on_Back_clicked()
{
    emit back();
}

void RegisterChild::on_toolButton_clicked()
{
    tip = new QMessageBox();
    tip->setWindowTitle("Account Setup");
    tip->setWindowIcon(QIcon(":/images/images/Icon.png"));
    tip->setText("Usernames must be between 6-20 characters in length and must not start/end with a period or underscore. \n"
                 "Password must contain 1 digit, 1 lower case, 1 upper case and #?!@$%^&*- in 6 to 20 characters.");
    tip->addButton(QMessageBox::Ok);
    tip->show();

}
