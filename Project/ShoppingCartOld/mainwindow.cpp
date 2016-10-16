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

void MainWindow::crActns(){
    aboutAction = new QAction(tr("&About"),this);
    aboutAction->setStatusTip(tr("Show the application's About box"));
    connect(aboutAction, SIGNAL(triggered()),this, SLOT(about()));
}

void MainWindow::crMenus(){
    fileMenu = menuBar()->addMenu(tr("&File"));

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
}

void MainWindow::newFile(){
    //this is nothing
}

void MainWindow::about(){
    QMessageBox::about(this,tr("About my shopping cart"),
                       tr("<h2>Shopping Cart 1.0</h2>"
                          "<p>This shopping cart is a small application "
                          "that allows a user to purchase items "
                          "and find a total cost."));
}
