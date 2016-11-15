#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->mdiArea->setBackground(QColor("blue"));

    isLog = false;
    isList1 = false;
    isList2 = false;
    isList3 = false;
    isCheck = false;

    name = "default";
    password = "default";
    totalM=0;
    //page one unitC count holders
    unitC1=0,unitC2=0,unitC3=0;
    unitC4=0,unitC5=0,unitC6=0;
    unitC7=0,unitC8=0,unitC9=0;
    //page two unitC count holders
    unitC10=0,unitC11=0,unitC12=0;
    unitC13=0,unitC14=0,unitC15=0;
    unitC16=0,unitC17=0,unitC18=0;
    //page three unitC count holders
    unitC19=0,unitC20=0,unitC21=0;
    unitC22=0,unitC23=0,unitC24=0;
    unitC25=0,unitC26=0,unitC27=0;

    setWindowTitle(tr("Branden's Bizarre Bazaar"));
    //begin with login screen
    crLgSc();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //check to see if the program is ok to close
//    event->accept();
}

void MainWindow::crLgSc()
{
    //check if there is already a login, then create one
    if(isLog){
        delete loginchild;
    }
    isLog = true;
    loginchild = new LoginChild(ui->mdiArea);
    loginchild->setAttribute(Qt::WA_DeleteOnClose);\
    loginchild->setWindowFlags(Qt::WindowStaysOnTopHint);
    loginchild->show();
    loginchild->move(390,200);
    //connections between the login screen and the main window
    connect(loginchild,SIGNAL(closeLg()),this,SLOT(remLog())); //if the user exits the login by the close event, set isLog to false
    connect(loginchild,SIGNAL(sendNaPa(QString,QString)),this,SLOT(setNaPa(QString,QString)));   //connect the login submit to the main window
    //set status bar
    this->statusBar()->showMessage(tr("Log-In page"));
}

void MainWindow::crLiP1()
{
    //check if any listings are displayed
    setFal();
    //create the first listing page
    isList1 = true;
    listingchild1 = new ListingChild1(ui->mdiArea);
    listingchild1->setAttribute(Qt::WA_DeleteOnClose);
    listingchild1->setWindowFlags(Qt::FramelessWindowHint);
    listingchild1->show();
    //connections between the listing page and the mainwindow
    connect(listingchild1,SIGNAL(fetch()),this,SLOT(emSetUp1()));
    connect(listingchild1,SIGNAL(sendCnt1(int,int,int,int,int,int,int,int,int,float)),this,SLOT(setCnt1(int,int,int,int,int,int,int,int,int,float)));
    connect(this,SIGNAL(setup1(int,int,int,int,int,int,int,int,int,float)),listingchild1,SLOT(grab1(int,int,int,int,int,int,int,int,int,float)));
    connect(listingchild1,SIGNAL(page2()),this,SLOT(crLiP2()));

    //change borders
    this->menuBar()->setStyleSheet(tr("background-color: rgb(100, 161, 159);"));
    this->ui->mainToolBar->setStyleSheet(tr("background-color: rgb(157, 213, 211);"));
    this->statusBar()->setStyleSheet(tr("background-color: rgb(100, 161, 159);"));

    //emit fetch
    listingchild1->fetch();

    //set status bar
    this->statusBar()->showMessage(tr("Game of Thrones Items"));
}

void MainWindow::crLiP2()
{
    //check if any listings are displayed
    setFal();
    //create the first listing page
    isList2 = true;
    listingchild2 = new ListingChild2(ui->mdiArea);
    listingchild2->setAttribute(Qt::WA_DeleteOnClose);
    listingchild2->setWindowFlags(Qt::FramelessWindowHint);
    listingchild2->show();
    //connections between the listing page and the mainwindow
    connect(listingchild2,SIGNAL(fetch2()),this,SLOT(emSetUp2()));
    connect(listingchild2,SIGNAL(sendCnt2(int,int,int,int,int,int,int,int,int,float)),this,SLOT(setCnt2(int,int,int,int,int,int,int,int,int,float)));
    connect(this,SIGNAL(setup2(int,int,int,int,int,int,int,int,int,float)),listingchild2,SLOT(grab2(int,int,int,int,int,int,int,int,int,float)));
    connect(listingchild2,SIGNAL(page1()),this,SLOT(crLiP1()));

    //change borders
    this->menuBar()->setStyleSheet(tr("background-color: rgb(178, 175, 155);"));
    this->ui->mainToolBar->setStyleSheet(tr("background-color: rgb(114, 112, 99);"));
    this->statusBar()->setStyleSheet(tr("background-color: rgb(178, 175, 155);"));

    //emit fetch
    listingchild2->fetch2();

    //set status bar
    this->statusBar()->showMessage(tr("The Walking Dead Items"));
}

void MainWindow::remLog()
{
    isLog = false;
}

void MainWindow::setFal()
{
    if(isList1){
        delete listingchild1;
        isList1 = false;
    }
    if(isList2){
        delete listingchild2;
        isList2 = false;
    }
    if(isList3){
        //delete listingchild3;
        isList3 = false;
    }
    if(isCheck){
        //delete checkChild;
        isCheck = true;
    }
}

void MainWindow::setNaPa(QString user, QString pass)
{
    name = user;
    password = pass;
    qDebug() << user;
    qDebug() << pass;
}

void MainWindow::setCnt1(int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, float t)
{
//    qDebug()<<"entered MainWindow::setCnt1";
    unitC1=u1;
    unitC2=u2;
    unitC3=u3;
    unitC4=u4;
    unitC5=u5;
    unitC6=u6;
    unitC7=u7;
    unitC8=u8;
    unitC9=u9;
    totalM=t;
}

void MainWindow::setCnt2(int u10, int u11, int u12, int u13, int u14, int u15, int u16, int u17, int u18, float t)
{
//    qDebug()<<"entered MainWindow::setCnt2";
    unitC10=u10;
    unitC11=u11;
    unitC12=u12;
    unitC13=u13;
    unitC14=u14;
    unitC15=u15;
    unitC16=u16;
    unitC17=u17;
    unitC18=u18;
    totalM=t;
}

void MainWindow::emSetUp1()
{
//    qDebug()<<"entered emSetUp1";
    emit setup1(unitC1,unitC2,unitC3,unitC4,unitC5,unitC6,unitC7,unitC8,unitC9,totalM);
}

void MainWindow::emSetUp2()
{
//    qDebug()<<"entered emSetUp2";
    emit setup2(unitC10,unitC11,unitC12,unitC13,unitC14,unitC15,unitC16,unitC17,unitC18,totalM);
}
