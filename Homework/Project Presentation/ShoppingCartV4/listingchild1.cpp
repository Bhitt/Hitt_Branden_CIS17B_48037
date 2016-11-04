#include "listingchild1.h"
#include "ui_listingchild1.h"

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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #4"));
    image->setWindowFlags(Qt::FramelessWindowHint);
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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #5"));
    image->setWindowFlags(Qt::FramelessWindowHint);
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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #6"));
    image->setWindowFlags(Qt::FramelessWindowHint);
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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #7"));
    image->setWindowFlags(Qt::FramelessWindowHint);
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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #8"));
    image->setWindowFlags(Qt::FramelessWindowHint);
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
//    image->setScaledContents(true);
    image->setWindowTitle(tr("Item #9"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    image->show();
}

void ListingChild1::AddUnit1()
{
    int temp;
    temp = ui->UnitCount->value();
    if(temp>unit1){
        total+=(temp-unit1)*80.07;
    }else if(temp<unit1){
        total-=(unit1-temp)*80.07;
    }
    unit1=temp;
    ui->Money->setText(QString(total));
}
