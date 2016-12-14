#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>
#include <QDebug>
#include <QKeyEvent>

class Login : public QWidget
{
    Q_OBJECT
private:
    QLabel *uLabel;         // user name label
    QLineEdit *uLine;       // user name line edit
    QLabel *pLabel;         // password label
    QLineEdit *pLine;       // password line edit
    QCheckBox *pBox;        // password visibility check box
    bool lineChk;
    QLabel *eCheck;

    void keyPressEvent(QKeyEvent *keyEvent);
public:
    Login(QWidget *parent = 0);
    ~Login();
    QPushButton *submit;    // submit push button
    QPushButton *close;     // close push button
    QPushButton *reg;       // register push button

    QString getOne(){return pLine->text();}
    QString getTwo(){return uLine->text();}
    void setEChck(QString data) {eCheck->setText(data);}

private slots:
    void setVis();
    void checkLogIn();

signals:
    void goToMenu();
    void goToCheckUser();

};


#endif // LOGIN_H
