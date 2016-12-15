#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QMdiSubWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QToolButton>
#include <QMessageBox>

class RegisterUser : public QMdiSubWindow
{
    Q_OBJECT
private:
    QLabel *uLabel;         // user name label
    QLineEdit *uLine;       // user name line edit
    QLabel *pLabel;         // password label
    QLineEdit *pLine;       // password line edit
    QCheckBox *pBox;        // password visibility check box
    bool lineChk;           // boolean for password visibility
    QLabel *cLabel;         // password confirmation label
    QLineEdit *cLine;       // password confirmation line edit
    QRegularExpression *uRegEx;         // regular expression for username
    QRegularExpression *pRegEx;         // regular expression for password
    QRegularExpressionMatch *uMatch;    // match for regular expression
    QRegularExpressionMatch *pMatch;    // match for regular expression
    bool matchChk;                      // boolean for match instantiation
    bool regEx();           //checks the regular expressions
    QToolButton *hint;       //hint for the reg exp constraints
    QMessageBox *tip;

    QLabel *eCheck;

public:
    RegisterUser(QWidget *parent = 0);
    ~RegisterUser();
    QPushButton *submit;    // submit push button
    QPushButton *back;      // back push button
    QString getOne() {return pLine->text();}
    QString getTwo() {return uLine->text();}
    void setEChck(QString data) {eCheck->setText(data);}

private slots:
    void setVis();          // slot for setting password to visible while typing
    void validate();        // slot for validating the confirm password
    void hintClick();       // slot for toolbutton
};

#endif // REGISTERUSER_H
