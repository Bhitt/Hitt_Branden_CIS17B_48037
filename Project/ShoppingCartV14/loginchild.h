#ifndef LOGINCHILD_H
#define LOGINCHILD_H

//system libraries
#include <QMainWindow>
#include <QMdiSubWindow>
#include <QCloseEvent>

namespace Ui {
class LoginChild;
}

class LoginChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit LoginChild(QWidget *parent = 0);
    ~LoginChild();

    void setEChck(QString data);
    void setOne(QString data);
    QString getOne();
    QString getTwo();
protected:
    void closeEvent(QCloseEvent *closeEvent);
private:
    Ui::LoginChild *ui;

    bool passTog; //password hide toggle

signals:
    void closeLg(); //close login
    void sendNaPa(QString user); //send name value when submitted
    void beginReg();
    void submit();
    void guest();

private slots:
    void showPass(); //show password characters
    void subPush();  //submit button is pushed
    void on_pushButton_2_clicked();
    void on_Submit_clicked();
    void on_guest_clicked();
};

#endif // LOGINCHILD_H
