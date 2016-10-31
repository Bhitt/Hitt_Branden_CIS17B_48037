#include "listingchild1.h"
#include "ui_listingchild1.h"

ListingChild1::ListingChild1(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::ListingChild1)
{
    ui->setupUi(this);
}

ListingChild1::~ListingChild1()
{
    delete ui;
}

void ListingChild1::on_Expand_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/BluRayS1-S5"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #1"));
    image->show();
}

void ListingChild1::on_Expand_2_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/BluRayS6"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #2"));
    image->show();
}

void ListingChild1::on_Expand_3_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/GameOfThronesBooks"));
    image->setWindowTitle(tr("Item #3"));
    image->show();
}

void ListingChild1::on_Expand_4_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/TheWorldOfIceAndFire"));
    image->setFixedSize(600,800);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #4"));
    image->show();
}

void ListingChild1::on_Expand_5_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/GoTBoardGame"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #5"));
    image->show();
}

void ListingChild1::on_Expand_6_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/GoTCoffeeMug"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #6"));
    image->show();
}

void ListingChild1::on_Expand_7_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/TheIronThrone"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);

    image->setWindowTitle(tr("Item #7"));
    image->show();
}

void ListingChild1::on_Expand_8_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/TheNightKing"));
    image->setFixedSize(900,700);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #8"));
    image->show();
}

void ListingChild1::on_Expand_9_clicked()
{
    QLabel *image = new QLabel;
    image->setPixmap(QPixmap(":/images/images/Pop!JonSnow"));
    image->setFixedSize(700,700);
    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #9"));
    image->show();
}
