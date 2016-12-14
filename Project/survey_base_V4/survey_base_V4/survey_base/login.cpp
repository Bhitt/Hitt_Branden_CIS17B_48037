#include "login.h"

Login::Login(QWidget *parent) : QWidget(parent)
{
    this->setGeometry(0,0,1280,720);

    // creating user name label and line edit
    uLabel = new QLabel(tr("Username:"),this);
    uLine = new QLineEdit(this);

    // creating password label and line edit
    pLabel = new QLabel(tr("Password:"),this);
    pLine = new QLineEdit(this);

    pLine->setEchoMode(QLineEdit::Password);
    lineChk = true;

    pBox = new QCheckBox(this);

    // creating submit, close, and register push buttons
    submit = new QPushButton(tr("Submit"),this);
    close = new QPushButton(tr("Close"),this);
    reg = new QPushButton(tr("Register Now!"),this);

    eCheck = new QLabel(this);

    // connecting buttons
    connect(pBox,SIGNAL(toggled(bool)),this,SLOT(setVis()));
    connect(submit,SIGNAL(clicked(bool)),this,SLOT(checkLogIn()));

    // set all backgrounds to transparent
    uLabel->setAttribute(Qt::WA_TranslucentBackground);
    uLine->setAttribute(Qt::WA_TranslucentBackground);
    pLabel->setAttribute(Qt::WA_TranslucentBackground);
    pLine->setAttribute(Qt::WA_TranslucentBackground);
    submit->setAttribute(Qt::WA_TranslucentBackground);
    close->setAttribute(Qt::WA_TranslucentBackground);
    reg->setAttribute(Qt::WA_TranslucentBackground);
    pBox->setAttribute(Qt::WA_TranslucentBackground);
    eCheck->setAttribute(Qt::WA_TranslucentBackground);

    // set special conditions for the register button
    reg->setFlat(true);
    reg->setStyleSheet("text-decoration: underline; color: blue;");

    // set geometry for all things
    uLabel->setGeometry(this->width()/2 - 100,this->height()/2 - 100,50,20);
    uLine->setGeometry(this->width()/2 - 45,this->height()/2 - 100,100,20);
    pLabel->setGeometry(this->width()/2 - 100,this->height()/2 - 75,50,20);
    pLine->setGeometry(this->width()/2 - 45,this->height()/2 - 75,100,20);
    pBox->setGeometry(this->width()/2 + 60,this->height()/2 - 75,25,25);
    submit->setGeometry(this->width()/2 - 100,this->height()/2 - 50,75,25);
    close->setGeometry(this->width()/2 - 20,this->height()/2 - 50,75,25);
    reg->setGeometry(this->width()/2 - 75,this->height()/2 - 20,100,30);
    eCheck->setGeometry(this->width()/2 - 100,this->height()/2 + 10,200,30);
}

Login::~Login()
{
//    qDebug() << "Deleting Login Variables...";
    delete uLabel;
    delete uLine;
    delete pLabel;
    delete pLine;
    delete pBox;
    delete submit;
    delete close;
    delete reg;
//    qDebug() << "Done Deleting Login Variables";
}

//This is used to check if the logIn user is correct
void Login::checkLogIn()
{
    emit goToCheckUser();
}

void Login::keyPressEvent(QKeyEvent *keyEvent)
{
    if(keyEvent->key() == Qt::Key_Return)
    {
        emit goToCheckUser();
    }
}

void Login::setVis()
{
    if(lineChk)
    {
        pLine->setEchoMode(QLineEdit::Normal);
        lineChk = false;
    }
    else
    {
        pLine->setEchoMode(QLineEdit::Password);
        lineChk = true;
    }
}
