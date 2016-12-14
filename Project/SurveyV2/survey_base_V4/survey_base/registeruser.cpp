#include "registeruser.h"



RegisterUser::RegisterUser(QWidget *parent) : QMdiSubWindow(parent)
{
    this->setGeometry(0,0,1280,720);
    this->setFixedSize(1280,720);

    // creating user name label and line edit
    uLabel = new QLabel(tr("Username:"),this);
    uLine = new QLineEdit(this);

    // creating password label and line edit
    pLabel = new QLabel(tr("Password:"),this);
    pLine = new QLineEdit(this);

    // creating password confirmation label and line edit
    cLabel = new QLabel(tr("Confirm:"),this);
    cLine = new QLineEdit(this);

    // setting the initial echo mode for the password line edits
    pLine->setEchoMode(QLineEdit::Password);
    cLine->setEchoMode(QLineEdit::Password);
    lineChk = true;

    pBox = new QCheckBox(this);

    // creating submit and back push buttons
    submit = new QPushButton(tr("Submit"),this);
    back = new QPushButton(tr("Back"),this);

    submit->setEnabled(false);

    eCheck = new QLabel(this);
    eCheck->setText(tr(""));

    // connecting buttons
    connect(pBox,SIGNAL(toggled(bool)),this,SLOT(setVis()));

    // connecting password confirmation
    connect(uLine,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(cLine,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(pLine,SIGNAL(textChanged(QString)),this,SLOT(validate()));

    // set all backgrounds to transparent
    uLabel->setAttribute(Qt::WA_TranslucentBackground);
    uLine->setAttribute(Qt::WA_TranslucentBackground);
    pLabel->setAttribute(Qt::WA_TranslucentBackground);
    pLine->setAttribute(Qt::WA_TranslucentBackground);
    submit->setAttribute(Qt::WA_TranslucentBackground);
    back->setAttribute(Qt::WA_TranslucentBackground);
    pBox->setAttribute(Qt::WA_TranslucentBackground);
    eCheck->setAttribute(Qt::WA_TranslucentBackground);

    // set geometry for all things
    uLabel->setGeometry(this->width()/2 - 100,this->height()/2 - 100,50,20);
    uLine->setGeometry(this->width()/2 - 45,this->height()/2 - 100,100,20);
    pLabel->setGeometry(this->width()/2 - 100,this->height()/2 - 75,50,20);
    pLine->setGeometry(this->width()/2 - 45,this->height()/2 - 75,100,20);
    pBox->setGeometry(this->width()/2 + 60,this->height()/2 - 75,25,25);
    cLabel->setGeometry(this->width()/2 - 100,this->height()/2 - 50,50,20);
    cLine->setGeometry(this->width()/2 - 45,this->height()/2 - 50,100,20);
    submit->setGeometry(this->width()/2 - 100,this->height()/2 - 25,75,25);
    back->setGeometry(this->width()/2 - 20,this->height()/2 - 25,75,25);
    eCheck->setGeometry(this->width()/2 - 100,this->height()/2 + 10,100,20);
}

RegisterUser::~RegisterUser()
{
//    qDebug() << "Deleting Registration Variables...";
//    delete uLabel;
//    delete uLine;
//    delete pLabel;
//    delete pLine;
//    delete pBox;
//    delete cLabel;
//    delete cLine;
//    delete submit;
//    delete back;
//    delete uRegEx;
//    delete pRegEx;
//    if(matchChk)
//    {
//        delete uMatch;
//        delete pMatch;
//    }
    //    qDebug() << "Done Deleting Registration Variables";
}

void RegisterUser::setVis()
{
    if(lineChk)
    {
        pLine->setEchoMode(QLineEdit::Normal);
        cLine->setEchoMode(QLineEdit::Normal);
        lineChk = false;
    }
    else
    {
        pLine->setEchoMode(QLineEdit::Password);
        cLine->setEchoMode(QLineEdit::Password);
        lineChk = true;
    }
}

void RegisterUser::validate()
{
    //
    bool ok1 =false, ok2=false, ok3 = false;
        //check to make sure all fields are filled
        ok1 =  !uLine->text().isEmpty()
                && !pLine->text().isEmpty()
                && !cLine->text().isEmpty();

        //check to make sure the two passwords are the same
        if(pLine->text() == cLine->text()) ok2=true;

        //check regular expressions
        if(ok1 && ok2) ok3 = regEx();

        //set the submit to enabled or not enabled
        if(ok1 && ok2 && ok3){
            submit->setEnabled(true);
        }
        else{
            submit->setEnabled(false);
        }
}

bool RegisterUser::regEx()
{
    //http://stackoverflow.com/questions/12018245/regular-expression-to-validate-username

    //Regular Expressions to match
    pRegEx = new QRegularExpression("^((?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[@#$%]).{6,20})$");
    uRegEx = new QRegularExpression("^(?=.{6,20}$)(?![_.])(?!.*[_.]{2})[a-zA-Z0-9._]+(?<![_.])$");
    //bools
    bool one = false, two = false;
    //check password
    pMatch = new QRegularExpressionMatch(pRegEx->match(pLine->text()));
    one = pMatch->hasMatch();
    //check name
    uMatch = new QRegularExpressionMatch(uRegEx->match(uLine->text()));
    two = uMatch->hasMatch();

    //return results
    if(one && two) return true;
    else return false;
}
