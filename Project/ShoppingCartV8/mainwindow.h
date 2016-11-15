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

    //page one unitC count holders
    int unitC1, unitC2, unitC3;
    int unitC4, unitC5, unitC6;
    int unitC7, unitC8, unitC9;
    //page two unitC count holders
    int unitC10, unitC11, unitC12;
    int unitC13, unitC14, unitC15;
    int unitC16, unitC17, unitC18;
    //page three unitC count holders
    int unitC19, unitC20, unitC21;
    int unitC22, unitC23, unitC24;
    int unitC25, unitC26, unitC27;
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
    
    double totalM;

signals:
    void setup1(int,int,int,int,int,int,int,int,int,float); //send the information to set up the first page

public slots:
    void emSetUp1(); //emit the setup signal

private slots:
    void crLgSc(); //create the login screen
    void crLiP1(); //create the listing child page 1
    void remLog(); //set the isLog to false
    void setFal(); //set bools to false
    void setNaPa(QString user, QString pass); //set the user name and password
    void setCnt1(int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, float t); //set the unitC counts from the first listing page
};

#endif // MAINWINDOW_H
