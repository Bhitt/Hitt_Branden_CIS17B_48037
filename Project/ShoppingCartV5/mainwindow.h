#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "loginchild.h"
#include "listingchild1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    LoginChild *loginchild;
    ListingChild1 *listingchild1;

    bool isLog;
    bool isList1;
    bool isList2;
    bool isList3;
    bool isCheck;

    QString name;
    QString password;
    int total;
    //page one unit count holders
    int unit1;
    int unit2;
    int unit3;
    int unit4;
    int unit5;
    int unit6;
    int unit7;
    int unit8;
    int unit9;
    //page two unit count holders
    int unit10;
    int unit11;
    int unit12;
    int unit13;
    int unit14;
    int unit15;
    int unit16;
    int unit17;
    int unit18;
    //page three unit count holders
    int unit19;
    int unit20;
    int unit21;
    int unit22;
    int unit23;
    int unit24;
    int unit25;
    int unit26;
    int unit27;

private slots:
    void crLgSc(); //create the login screen
    void crLiP1(); //create the listing child page 1

    void remLog(); //set the isLog to false
    void setFal(); //set bools to false
    void setNaPa(QString user, QString pass); //set the user name and password
};

#endif // MAINWINDOW_H
