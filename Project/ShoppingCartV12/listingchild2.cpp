#include "listingchild2.h"
#include "ui_listingchild2.h"

ListingChild2::ListingChild2(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::ListingChild2)
{
    ui->setupUi(this);

    //set banner timer
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(bannerT()));
    timer->start(1200);

    //set units to zero
    unit10=0, unit11=0, unit12=0;
    unit13=0, unit14=0, unit15=0;
    unit16=0, unit17=0, unit18=0;
    total=0;

    //set the image expand to false
    isExpand=false;
    //set the unitCount values
    emit fetch2();
    //set the delivery dates
    dateSet();
}

ListingChild2::~ListingChild2()
{
    if(isExpand){
        image->close();
    }
    delete ui;
}

void ListingChild2::on_Expand_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDBluRayS1-S5"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(342,445);
    image->setWindowTitle(tr("Item #10"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_2_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDBluRayS6"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(500,639);
    image->setWindowTitle(tr("Item #11"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_3_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDComic1"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(325,499);
    image->setWindowTitle(tr("Item #12"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_4_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDComic2"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(325,499);
    image->setWindowTitle(tr("Item #13"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_5_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDBoardGame"));
    image->setIconSize(QSize(750,514));
    image->setFixedSize(750,514);
    image->setWindowTitle(tr("Item #14"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_6_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/WDCoffeeMug"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(607,579);
    image->setWindowTitle(tr("Item #15"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_7_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Daryl"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(700,700);
    image->setWindowTitle(tr("Item #16"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_8_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Glenn"));
    image->setIconSize(QSize(400,750));
    image->setFixedSize(400,750);
    image->setWindowTitle(tr("Item #17"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::on_Expand_9_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Pop!Negan"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(600,427);
    image->setWindowTitle(tr("Item #18"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild2::expBool()
{
    isExpand = false;
}

void ListingChild2::addUnit10()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount10->value();
    total -= 77.21f * unit10;
    total += 77.21f *ui->UnitCount10->value();
    unit10=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit11()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount11->value();
    total -= 49.99f * unit11;
    total += 49.99f *ui->UnitCount11->value();
    unit11=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit12()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount12->value();
    total -= 34.45f * unit12;
    total += 34.45f *ui->UnitCount12->value();
    unit12=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit13()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount13->value();
    total -= 30.51f * unit13;
    total += 30.51f *ui->UnitCount13->value();
    unit13=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit14()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount14->value();
    total -= 25.96f * unit14;
    total += 25.96f *ui->UnitCount14->value();
    unit14=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit15()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount15->value();
    total -= 16.23f * unit15;
    total += 16.23f *ui->UnitCount15->value();
    unit15=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit16()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount16->value();
    total -= 192.74f * unit16;
    total += 192.74f *ui->UnitCount16->value();
    unit16=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit17()
{
//    qDebug()<<total;
    int temp=0;                         //tempory storage for the ui unit count value
    QString tempS;                      //tempory string that will be set on the ui money
    temp = ui->UnitCount17->value();     //sets temp to the current value in the ui
    total -= 474.23f * unit17;
    total += 474.23f *ui->UnitCount17->value();
    unit17=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::addUnit18()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount18->value();
    total -= 15.43f * unit18;
    total += 15.43f *ui->UnitCount18->value();
    unit18=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild2::on_image1button_clicked()
{
    on_Expand_clicked();
}

void ListingChild2::on_image2button_clicked()
{
    on_Expand_2_clicked();
}

void ListingChild2::on_image3button_clicked()
{
    on_Expand_3_clicked();
}

void ListingChild2::on_image4button_clicked()
{
    on_Expand_4_clicked();
}

void ListingChild2::on_image5button_clicked()
{
    on_Expand_5_clicked();
}

void ListingChild2::on_image6button_clicked()
{
    on_Expand_6_clicked();
}

void ListingChild2::on_image7button_clicked()
{
    on_Expand_7_clicked();
}

void ListingChild2::on_image8button_clicked()
{
    on_Expand_8_clicked();
}

void ListingChild2::on_image9button_clicked()
{
    on_Expand_9_clicked();
}

void ListingChild2::grab2(int u10, int u11, int u12, int u13, int u14, int u15, int u16, int u17, int u18, float t)
{
    QString tempS;
    unit10=u10;
    unit11=u11;
    unit12=u12;
    unit13=u13;
    unit14=u14;
    unit15=u15;
    unit16=u16;
    unit17=u17;
    unit18=u18;
    total=t;
    ui->UnitCount10->setValue(unit10);
    ui->UnitCount11->setValue(unit11);
    ui->UnitCount12->setValue(unit12);
    ui->UnitCount13->setValue(unit13);
    ui->UnitCount14->setValue(unit14);
    ui->UnitCount15->setValue(unit15);
    ui->UnitCount16->setValue(unit16);
    ui->UnitCount17->setValue(unit17);
    ui->UnitCount18->setValue(unit18);
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild2::bannerT()
{
    ui->banner->deleteLater();
    timer->stop();
    delete timer;
}

void ListingChild2::addCart()
{
    emit sendCnt2(unit10,unit11,unit12,unit13,unit14,unit15,unit16,unit17,unit18,total);
}

void ListingChild2::dateSet()
{

    QDate *day = new QDate();           //construct the qdate
    QString deliv = day->currentDate().addDays(2).toString("dddd, MMM. dd");    //construct the string
//    qDebug() << deliv;
    ui->DeliveryDate->setText(deliv);
    ui->DeliveryDate->setStyleSheet("color:#0caa46;");                  //change delivery date 1
    deliv = day->currentDate().addDays(2).toString("dddd, MMM. dd");
    ui->DeliveryDate_2->setText(deliv);
    ui->DeliveryDate_2->setStyleSheet("color:#0caa46;");                //change delivery date 2
    deliv = day->currentDate().addDays(3).toString("dddd, MMM. dd");
    ui->DeliveryDate_3->setText(deliv);
    ui->DeliveryDate_3->setStyleSheet("color:#0caa46;");                //change delivery date 3
    deliv = day->currentDate().addDays(2).toString("dddd, MMM. dd");
    ui->DeliveryDate_4->setText(deliv);
    ui->DeliveryDate_4->setStyleSheet("color:#0caa46;");                //change delivery date 4
    deliv = day->currentDate().addDays(3).toString("dddd, MMM. dd");
    ui->DeliveryDate_5->setText(deliv);
    ui->DeliveryDate_5->setStyleSheet("color:#0caa46;");                //change delivery date 5
    deliv = day->currentDate().addDays(4).toString("dddd, MMM. dd");
    ui->DeliveryDate_6->setText(deliv);
    ui->DeliveryDate_6->setStyleSheet("color:#0caa46;");                //change delivery date 6
    deliv = day->currentDate().addDays(2).toString("dddd, MMM. dd");
    ui->DeliveryDate_7->setText(deliv);
    ui->DeliveryDate_7->setStyleSheet("color:#0caa46;");                //change delivery date 7
    deliv = day->currentDate().addDays(1).toString("dddd, MMM. dd");
    ui->DeliveryDate_8->setText(deliv);
    ui->DeliveryDate_8->setStyleSheet("color:#0caa46;");                //change delivery date 8
    deliv = day->currentDate().addDays(3).toString("dddd, MMM. dd");
    ui->DeliveryDate_9->setText(deliv);
    ui->DeliveryDate_9->setStyleSheet("color:#0caa46;");                //change delivery date 9
}

void ListingChild2::on_GoTo1_clicked()
{
    emit page1();
}

void ListingChild2::on_GoTo3_clicked()
{
    emit page3();
}

void ListingChild2::on_previous_clicked()
{
    emit page1();
}

void ListingChild2::on_nextPage_clicked()
{
    emit page3();
}

void ListingChild2::on_CheckoutButton_clicked()
{
    emit chkOut();
}
