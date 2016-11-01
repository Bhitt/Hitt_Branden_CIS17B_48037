#ifndef LOGINCHILD_H
#define LOGINCHILD_H

//system libraries
#include <QMainWindow>
#include <QMdiSubWindow>

namespace Ui {
class LoginChild;
}

class LoginChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit LoginChild(QWidget *parent = 0);
    ~LoginChild();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::LoginChild *ui;

    bool passTog; //password hide toggle

signals:
    void closeLg(); //close login
    void sendNaPa(QString user, QString pass); //send name value and password when submitted

private slots:
    void showPass(); //show password characters
    void subPush();  //submit button is pushed
};

#endif // LOGINCHILD_H
