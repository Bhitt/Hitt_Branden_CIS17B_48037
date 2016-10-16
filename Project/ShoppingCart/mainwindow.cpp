#include <QPixmap>
#include <QLabel>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set background
    QPixmap bkgnd(":/Images/ShoppingCartBG.png");
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::about()
{
    QMessageBox::about(this,tr("About this shopping cart"),
                tr("<h2>Shopping Cart 1.0 </h2>"
                   "<p>This is a small application that "
                   "demonstrates QT with a shopping cart for the "
                   "user to purchase items."));
}

void MainWindow::on_Expand_clicked()
{
    //ExpandedImage *exp = new ExpandedImage;
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/BluRayS1-S5"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->show();
}
