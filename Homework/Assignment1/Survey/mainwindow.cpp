//System Libraries
#include <QMessageBox>
//User Libraries
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    crActn();
    crMenus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile(){

}

void MainWindow::crActn(){
    aboutAction = new QAction(tr("&About"),this);
    aboutAction->setStatusTip(tr("Show the application's About box"));
    connect(aboutAction, SIGNAL(triggered()),this, SLOT(about()));
}

void MainWindow::crMenus(){
    //File Menu
    fileMenu = menuBar()->addMenu(tr("&File"));
    //fileMenu = addAction(newAction);

    //Help Menu
    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
}

void MainWindow::about(){
    QMessageBox::about(this,tr("About Survey"),
            tr("<h2>Survey 1.0 </h2>"
               "<p>Survey is a small application that "
               "demonstrates QT with a survey for the "
               "user to take."));
}
