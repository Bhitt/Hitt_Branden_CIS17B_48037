#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCryptographicHash>
#include <QCloseEvent>

#include "loginchild.h"
#include "listingchild1.h"
#include "listingchild2.h"
#include "listingchild3.h"
#include "connection.h"
#include "registerchild.h"

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

    //create the database connection
    connection createC();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    LoginChild *loginchild;
    ListingChild1 *listingchild1;
    ListingChild2 *listingchild2;
    ListingChild3 *listingchild3;
    RegisterChild *regchild;
    connection con;

    bool isLog;     //is the login child open
    bool isList1;   //is the listing1 child open
    bool isList2;   //is the listing2 child open
    bool isList3;   //is the listing3 child open
    bool isCheck;   //is the checking child open
    bool isReg;     //is the register child open

    bool isGuest;   //is it a guest browsing
    bool isDirty;   //are there unsaved changes
    
    QString name;
    QString password;
    
    double totalM;


signals:
    void setup1(int,int,int,int,int,int,int,int,int,float); //send the information to set up the first page
    void setup2(int,int,int,int,int,int,int,int,int,float); //send the information to set up the second page
    void setup3(int,int,int,int,int,int,int,int,int,float); //send the information to set up the third page

public slots:
    void emSetUp1();    //emit the setup signal
    void emSetUp2();    //emit the second setup signal
    void emSetUp3();    //emit the third setup signal
    void validate();    //validates the account creation
    void checkUser();   //checks the username
    void guestBg();     //browse the store as a guest

private slots:
    void crLgSc(); //create the login screen
    void crRgSc(); //create the register screen
    void crLiP1(); //create the listing child page 1
    void crLiP2(); //create the listing child page 2
    void crLiP3(); //create the listing child page 3
    void remLog(); //set the isLog to false
    void remReg(); //set the isReg to false
    void setFal(); //set bools to false
    void setNaPa(QString user, QString pass); //set the user name and password
    void setCnt1(int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, float t); //set the unitC counts from the first listing page
    void setCnt2(int u10, int u11, int u12, int u13, int u14, int u15, int u16, int u17, int u18, float t); //set the unitC counts from the second listing page
    void setCnt3(int u19, int u20, int u21, int u22, int u23, int u24, int u25, int u26, int u27, float t); //set the unitC counts from the third listing page
};

#endif // MAINWINDOW_H
