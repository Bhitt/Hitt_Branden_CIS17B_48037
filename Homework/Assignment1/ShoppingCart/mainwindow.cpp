//System Libraries
#include <QMessageBox>
#include <QMenuBar>

//User Libraries
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    crActns();
    crMenus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::crActns(){
    aboutAction = new QAction(tr("&About"),this);
    aboutAction->setStatusTip(tr("Show the application's About box"));
    connect(aboutAction, SIGNAL(triggered()),this, SLOT(about());
}

MainWindow::crMenus(){
    fileMenu = menuBar()->addMenu(tr("&File"));

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
}

MainWindow::newFile(){
    //this is nothing
}

MainWindow::about(){
    QMessageBox::about(this,tr("About Shopping Cart"),
                       tr("<h2>Shopping Cart 1.0</h2>"
                          "<p>Shopping Cart is a small application"
                          "that allows a user to purchase items"
                          "and find a total cost."));
}
