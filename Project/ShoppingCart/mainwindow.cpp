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
//    QPixmap bkgnd(":/Images/ShoppingCartBG.png");
//    QPalette palette;
//    palette.setBrush(QPalette::Background, bkgnd);
//    this->setPalette(palette);

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
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/BluRayS1-S5"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_2_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/BluRayS6"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_3_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/GameOfThronesBooks"));
    image->show();
}

void MainWindow::on_Expand_4_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/TheWorldOfIceAndFire"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_5_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/GoTBoardGame"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_6_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/GoTCoffeeMug"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_7_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/TheIronThrone"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_8_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/TheNightKing"));
    image->setFixedSize(900,700);
    image->setScaledContents(true);
    image->show();
}

void MainWindow::on_Expand_9_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/Images/Pop!JonSnow"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->show();
}
