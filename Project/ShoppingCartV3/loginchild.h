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

    bool passTog;

signals:
    void closeLg(); //close login

private slots:
    void showPass(); //show password characters
};

#endif // LOGINCHILD_H
