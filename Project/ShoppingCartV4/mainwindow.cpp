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
    loginchild->setAttribute(Qt::WA_DeleteOnClose);
    loginchild->show();
    loginchild->move(390,200);
    //connections
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
    //set status bar
    this->statusBar()->showMessage(tr("Game of Thrones Items"));
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
        //delete listingchild2;
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
    qDebug() <<pass;
}
