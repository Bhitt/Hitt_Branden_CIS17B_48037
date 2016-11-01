#include "listingchild1.h"
#include "ui_listingchild1.h"
#include <QDebug>

ListingChild1::ListingChild1(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::ListingChild1)
{
    ui->setupUi(this);
    //set units to zero
    unit1=0, unit2=0, unit3=0;
    unit4=0, unit5=0, unit6=0;
    unit7=0, unit8=0, unit9=0;
    total=0;

}

ListingChild1::~ListingChild1()
{
    delete ui;
}

void ListingChild1::on_Expand_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/BluRayS1-S5"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(585,800);
    image->setWindowTitle(tr("Item #1"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_2_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/BluRayS6"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(550,685);
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #2"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_3_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/GameOfThronesBooks"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(490,482);
    image->setWindowTitle(tr("Item #3"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_4_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/TheWorldOfIceAndFire"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(600,790);
    image->setWindowTitle(tr("Item #4"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_5_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/GoTBoardGame"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(650,700);
    image->setWindowTitle(tr("Item #5"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_6_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/GoTCoffeeMug"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(700,650);
    image->setWindowTitle(tr("Item #6"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_7_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/TheIronThrone"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(500,500);
    image->setWindowTitle(tr("Item #7"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_8_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/TheNightKing"));
    image->setIconSize(QSize(900,700));
    image->setFixedSize(900,670);
    image->setWindowTitle(tr("Item #8"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::on_Expand_9_clicked()
{
    QPushButton *image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Pop!JonSnow"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(700,700);
    image->setWindowTitle(tr("Item #9"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::addUnit1()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit1){
        total+=(temp-unit1)*(80.07);
    }
    else if(temp<unit1){
        total-=(unit1-temp)*(80.07);
    }
    unit1=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit2()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount2->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit2){
        total+=(temp-unit2)*(39.99);
    }
    else if(temp<unit2){
        total-=(unit2-temp)*(39.99);
    }
    unit2=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit3()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount3->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit3){
        total+=(temp-unit3)*(59.99);
    }
    else if(temp<unit3){
        total-=(unit3-temp)*(59.99);
    }
    unit3=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit4()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount4->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit4){
        total+=(temp-unit4)*(29.49);
    }
    else if(temp<unit4){
        total-=(unit4-temp)*(29.49);
    }
    unit4=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit5()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount5->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit5){
        total+=(temp-unit5)*(46.86);
    }
    else if(temp<unit5){
        total-=(unit5-temp)*(46.86);
    }
    unit5=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit6()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount6->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit6){
        total+=(temp-unit6)*(10.51);
    }
    else if(temp<unit6){
        total-=(unit6-temp)*(10.51);
    }
    unit6=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit7()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount7->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit7){
        total+=(temp-unit7)*(45.18);
    }
    else if(temp<unit7){
        total-=(unit7-temp)*(45.18);
    }
    unit7=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit8()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount8->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit8){
        total+=(temp-unit8)*(129.99);
    }
    else if(temp<unit8){
        total-=(unit8-temp)*(129.99);
    }
    unit8=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::addUnit9()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount9->value();
//    qDebug()<<"new unit count:" <<temp;
//    qDebug()<<"old unit count:" <<unit1;
    if(temp>unit9){
        total+=(temp-unit9)*(11.99);
    }
    else if(temp<unit9){
        total-=(unit9-temp)*(11.99);
    }
    unit9=temp;
//    qDebug()<<"total:" <<total;
    if(total<1)total=0.00;
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild1::on_image1button_clicked()
{
    on_Expand_clicked();
}

void ListingChild1::on_image2button_clicked()
{
    on_Expand_2_clicked();
}

void ListingChild1::on_image3button_clicked()
{
    on_Expand_3_clicked();
}

void ListingChild1::on_image4button_clicked()
{
    on_Expand_4_clicked();
}

void ListingChild1::on_image5button_clicked()
{
    on_Expand_5_clicked();
}

void ListingChild1::on_image6button_clicked()
{
    on_Expand_6_clicked();
}

void ListingChild1::on_image7button_clicked()
{
    on_Expand_7_clicked();
}

void ListingChild1::on_image8button_clicked()
{
    on_Expand_8_clicked();
}

void ListingChild1::on_image9button_clicked()
{
    on_Expand_9_clicked();
}
