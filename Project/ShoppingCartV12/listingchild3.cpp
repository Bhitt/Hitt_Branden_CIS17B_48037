#include "listingchild3.h"
#include "ui_listingchild3.h"

ListingChild3::ListingChild3(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::ListingChild3)
{
    ui->setupUi(this);

    //set banner timer
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(bannerT()));
    timer->start(1200);

    //set units to zero
    unit19=0, unit20=0, unit21=0;
    unit22=0, unit23=0, unit24=0;
    unit25=0, unit26=0, unit27=0;
    total=0;

    //set the image expand to false
    isExpand=false;
    //set the unitCount values
    emit fetch3();
    //set the delivery dates
    dateSet();
}

ListingChild3::~ListingChild3()
{
    if(isExpand){
        image->close();
    }
    delete ui;
}

void ListingChild3::on_Expand_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHBluRayS1"));
    image->setIconSize(QSize(504,645));
    image->setFixedSize(504,645);
    image->setWindowTitle(tr("Item #10"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_2_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHBluRayS2"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(570,770);
    image->setWindowTitle(tr("Item #11"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_3_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHBook"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(325,499);
    image->setWindowTitle(tr("Item #12"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_4_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHColoringBook"));
    image->setIconSize(QSize(600,800));
    image->setFixedSize(325,499);
    image->setWindowTitle(tr("Item #13"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_5_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHBoardGame"));
    image->setIconSize(QSize(750,514));
    image->setFixedSize(360,514);
    image->setWindowTitle(tr("Item #14"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_6_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SHCoffeeMug"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(700,700);
    image->setWindowTitle(tr("Item #15"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_7_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/SherlockHolmes"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(380,700);
    image->setWindowTitle(tr("Item #16"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_8_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Sherlock"));
    image->setIconSize(QSize(400,750));
    image->setFixedSize(400,480);
    image->setWindowTitle(tr("Item #17"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::on_Expand_9_clicked()
{
    if(isExpand) image->close();
    isExpand=true;
    image = new QPushButton;
    image->setFlat(true);
    image->setIcon(QPixmap(":/images/images/Pop!Sherlock"));
    image->setIconSize(QSize(700,700));
    image->setFixedSize(490,700);
    image->setWindowTitle(tr("Item #18"));
    image->setWindowFlags(Qt::FramelessWindowHint);
    image->setToolTip(tr("Click image to close"));
    connect(image,SIGNAL(clicked()),image,SLOT(close()));
    connect(image,SIGNAL(clicked()),this,SLOT(expBool()));
    image->show();
}

void ListingChild3::expBool()
{
    isExpand = false;
}

void ListingChild3::addUnit19()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount19->value();
    total -= 22.49f * unit19;
    total += 22.49f *ui->UnitCount19->value();
    unit19=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit20()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount20->value();
    total -= 20.77f * unit20;
    total += 20.77f *ui->UnitCount20->value();
    unit20=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit21()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount21->value();
    total -= 28.14f * unit21;
    total += 28.14f *ui->UnitCount21->value();
    unit21=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit22()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount22->value();
    total -= 9.68f * unit22;
    total += 9.68f *ui->UnitCount22->value();
    unit22=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit23()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount23->value();
    total -= 60.99f * unit23;
    total += 60.99f *ui->UnitCount23->value();
    unit23=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit24()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount24->value();
    total -= 11.95f * unit24;
    total += 11.95f *ui->UnitCount24->value();
    unit24=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit25()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount25->value();
    total -= 63.99f * unit25;
    total += 63.99f *ui->UnitCount25->value();
    unit25=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit26()
{
//    qDebug()<<total;
    int temp=0;                         //tempory storage for the ui unit count value
    QString tempS;                      //tempory string that will be set on the ui money
    temp = ui->UnitCount26->value();     //sets temp to the current value in the ui
    total -= 19.87f * unit26;
    total += 19.87f *ui->UnitCount26->value();
    unit26=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::addUnit27()
{
//    qDebug()<<total;
    int temp=0;
    QString tempS;
    temp = ui->UnitCount27->value();
    total -= 9.24f * unit27;
    total += 9.24f *ui->UnitCount27->value();
    unit27=temp;
    tempS = QString::number(total);
    if(total < 0.1) tempS = "0.00";
    ui->Money->setText(tempS);
    //send the new unit count to mainwindow
    addCart();
}

void ListingChild3::on_image1button_clicked()
{
    on_Expand_clicked();
}

void ListingChild3::on_image2button_clicked()
{
    on_Expand_2_clicked();
}

void ListingChild3::on_image3button_clicked()
{
    on_Expand_3_clicked();
}

void ListingChild3::on_image4button_clicked()
{
    on_Expand_4_clicked();
}

void ListingChild3::on_image5button_clicked()
{
    on_Expand_5_clicked();
}

void ListingChild3::on_image6button_clicked()
{
    on_Expand_6_clicked();
}

void ListingChild3::on_image7button_clicked()
{
    on_Expand_7_clicked();
}

void ListingChild3::on_image8button_clicked()
{
    on_Expand_8_clicked();
}

void ListingChild3::on_image9button_clicked()
{
    on_Expand_9_clicked();
}

void ListingChild3::grab3(int u19, int u20, int u21, int u22, int u23, int u24, int u25, int u26, int u27, float t)
{
    QString tempS;
    unit19=u19;
    unit20=u20;
    unit21=u21;
    unit22=u22;
    unit23=u23;
    unit24=u24;
    unit25=u25;
    unit26=u26;
    unit27=u27;
    total=t;
    ui->UnitCount19->setValue(unit19);
    ui->UnitCount20->setValue(unit20);
    ui->UnitCount21->setValue(unit21);
    ui->UnitCount22->setValue(unit22);
    ui->UnitCount23->setValue(unit23);
    ui->UnitCount24->setValue(unit24);
    ui->UnitCount25->setValue(unit25);
    ui->UnitCount26->setValue(unit26);
    ui->UnitCount27->setValue(unit27);
    tempS = QString::number(total);
    ui->Money->setText(tempS);
}

void ListingChild3::bannerT()
{
    ui->banner->deleteLater();
    timer->stop();
    delete timer;
}

void ListingChild3::addCart()
{
    emit sendCnt3(unit19,unit20,unit21,unit22,unit23,unit24,unit25,unit26,unit27,total);
}

void ListingChild3::dateSet()
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

void ListingChild3::on_GoTo1_clicked()
{
    emit page1();
}

void ListingChild3::on_previous_clicked()
{
    emit page2();
}

void ListingChild3::on_GoTo2_clicked()
{
    emit page2();
}

void ListingChild3::on_CheckoutButton_clicked()
{
    emit chkOut();
}
