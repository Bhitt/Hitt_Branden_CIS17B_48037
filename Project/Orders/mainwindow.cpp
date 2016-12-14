#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //set icon and bars
    setWindowIcon(QIcon(":/res/images/Icon.png"));
    this->menuBar()->setStyleSheet(tr("background-color: rgb(100, 161, 159);"));
    ui->mainToolBar->setStyleSheet(tr("background-color: rgb(157, 213, 211);"));
    this->statusBar()->setStyleSheet(tr("background-color: rgb(100, 161, 159);"));
    this->statusBar()->showMessage(tr("Game of Thrones Items"));
    //start item count at zero
    itemC = 1;
    itemC2 = 0;
    //default the unit counts
    unit1=0, unit2=0, unit3=0;
    unit4=0, unit5=0, unit6=0;
    unit7=0, unit8=0, unit9=0;
    unit10=0, unit11=0, unit12=0;
    unit13=0, unit14=0, unit15=0;
    unit16=0, unit17=0, unit18=0;
    unit19=0, unit20=0, unit21=0;
    unit22=0, unit23=0, unit24=0;
    unit25=0, unit26=0, unit27=0;
    total=0;

    //bing the socket
    udpSocket.bind(5825);
    //connect
    connect(&udpSocket,SIGNAL(readyRead()),this,SLOT(processPendingDatagrams()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setup()
{
    //create the layout
    QVBoxLayout *vLayout = new QVBoxLayout();

    itemC=3;
    itemC2=0;

    if(total>1){
        QHBoxLayout *hLayout = new QHBoxLayout();
        QLabel *header1 = new QLabel("Name");
        QLabel *header2 = new QLabel("Amount");
        QLabel *header3 = new QLabel("Price");
        header1->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header2->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header3->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header1->setFixedSize(300,20);
        header2->setFixedSize(60,20);
        header3->setFixedSize(60,20);
        hLayout->addWidget(header1);
        hLayout->addWidget(header2);
        hLayout->addWidget(header3);
        vLayout->addLayout(hLayout);
    }

    //page 1 items
    if(unit1>0){
        QLabel *item1 = new QLabel("Game of Thrones BluRay S1-S5");   //create the labels
        QLabel *amount = new QLabel(QString::number(unit1));
        QLabel *price = new QLabel(QString::number(unit1*80.07));
//        item1->setGeometry(120,20*itemC,300,20);                                   //position them
//        amount->setGeometry(430,20*itemC,50,20);
//        price->setGeometry(490,20*itemC,50,20);
        item1->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
        item1->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");                   //whiten background
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item1->show();                                                      //show labels
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item1);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;                                                           //increment item count

    }
    if(unit2>0){
        QLabel *item2 = new QLabel("Game of Thrones BluRay S6");
        QLabel *amount = new QLabel(QString::number(unit2));
        QLabel *price = new QLabel(QString::number(unit2*39.99));
//        item2->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item2->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
        item2->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item2->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item2);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;

    }
    if(unit3>0){
        QLabel *item3 = new QLabel("Game of Thrones 5 Book Set");
        QLabel *amount = new QLabel(QString::number(unit3));
        QLabel *price = new QLabel(QString::number(unit3*59.99));
        item3->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item3->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item3->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item3->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item3);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit4>0){
        QLabel *item4 = new QLabel("The World of Ice and Fire");
        QLabel *amount = new QLabel(QString::number(unit4));
        QLabel *price = new QLabel(QString::number(unit4*29.49));
        item4->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item4->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item4->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item4->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item4);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit5>0){
        QLabel *item5 = new QLabel("Game of Thrones Board Game");
        QLabel *amount = new QLabel(QString::number(unit5));
        QLabel *price = new QLabel(QString::number(unit5*46.86));
        item5->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item5->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item5->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item5->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item5);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit6>0){
        QLabel *item6 = new QLabel("Game of Thrones Coffee Mug");
        QLabel *amount = new QLabel(QString::number(unit6));
        QLabel *price = new QLabel(QString::number(unit6*10.51));
        item6->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item6->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item6->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item6->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item6);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit7>0){
        QLabel *item7 = new QLabel("The Iron Throne");
        QLabel *amount = new QLabel(QString::number(unit7));
        QLabel *price = new QLabel(QString::number(unit7*45.18));
        item7->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item7->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item7->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item7->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item7);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit8>0){
        QLabel *item8 = new QLabel("The Night's King");
        QLabel *amount = new QLabel(QString::number(unit8));
        QLabel *price = new QLabel(QString::number(unit8*129.99));
        item8->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item8->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item8->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item8->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item8);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit9>0){
        QLabel *item9 = new QLabel("Funko Pop! John Snow");
        QLabel *amount = new QLabel(QString::number(unit9));
        QLabel *price = new QLabel(QString::number(unit9*11.99));
        item9->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item9->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item9->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item9->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item9);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }

    //page 2 items
    if(unit10>0){
        QLabel *item10 = new QLabel("The Walking Dead BluRay S1-S5");
        QLabel *amount = new QLabel(QString::number(unit10));
        QLabel *price = new QLabel(QString::number(unit10*77.21));
        item10->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item10->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item10->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item10->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item10);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit11>0){
        QLabel *item11 = new QLabel("The Walking Dead BluRay S6");
        QLabel *amount = new QLabel(QString::number(unit11));
        QLabel *price = new QLabel(QString::number(unit11*49.99));
        item11->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item11->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item11->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item11->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item11);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit12>0){
        QLabel *item12 = new QLabel("The Walking Dead: Compendium One");
        QLabel *amount = new QLabel(QString::number(unit12));
        QLabel *price = new QLabel(QString::number(unit12*34.45));
        item12->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item12->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item12->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item12->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item12);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit13>0){
        QLabel *item13 = new QLabel("The Walking Dead: Compendium Two");
        QLabel *amount = new QLabel(QString::number(unit13));
        QLabel *price = new QLabel(QString::number(unit13*30.50));
        item13->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item13->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item13->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item13->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item13);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit14>0){
        QLabel *item14 = new QLabel("The Walking Dead Board Game");
        QLabel *amount = new QLabel(QString::number(unit14));
        QLabel *price = new QLabel(QString::number(unit14*25.96));
        item14->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item14->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item14->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item14->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item14);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit15>0){
        QLabel *item15 = new QLabel("The Walking Dead Coffee Mug");
        QLabel *amount = new QLabel(QString::number(unit15));
        QLabel *price = new QLabel(QString::number(unit15*16.23));
        item15->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item15->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item15->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item15->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item15);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit16>0){
        QLabel *item16 = new QLabel("The Walking Dead - Daryl");
        QLabel *amount = new QLabel(QString::number(unit16));
        QLabel *price = new QLabel(QString::number(unit16*192.74));
        item16->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item16->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item16->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item16->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item16);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit17>0){
        QLabel *item17 = new QLabel("The Walking Dead - Glenn");
        QLabel *amount = new QLabel(QString::number(unit17));
        QLabel *price = new QLabel(QString::number(unit17*474.23));
        item17->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item17->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item17->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item17->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item17);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit18>0){
        QLabel *item18 = new QLabel("Funko Pop! Negan");
        QLabel *amount = new QLabel(QString::number(unit18));
        QLabel *price = new QLabel(QString::number(unit18*15.43));
        item18->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item18->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item18->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item18->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item18);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }

    //page 3 items
    if(unit19>0){
        QLabel *item19 = new QLabel("BBC Sherlock Season One BluRay");
        QLabel *amount = new QLabel(QString::number(unit19));
        QLabel *price = new QLabel(QString::number(unit19*22.49));
        item19->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item19->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item19->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item19->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item19);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit20>0){
        QLabel *item20 = new QLabel("BBC Sherlock Season Two BluRay");
        QLabel *amount = new QLabel(QString::number(unit20));
        QLabel *price = new QLabel(QString::number(unit20*20.77));
        item20->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item20->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item20->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item20->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item20);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit21>0){
        QLabel *item21 = new QLabel("The Complete Sherlock Holmes Book");
        QLabel *amount = new QLabel(QString::number(unit21));
        QLabel *price = new QLabel(QString::number(unit21*28.14));
        item21->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item21->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item21->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item21->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item21);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit22>0){
        QLabel *item22 = new QLabel("The Mind Palace - Coloring Book");
        QLabel *amount = new QLabel(QString::number(unit22));
        QLabel *price = new QLabel(QString::number(unit22*9.68));
        item22->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item22->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item22->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item22->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item22);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit23>0){
        QLabel *item23 = new QLabel("Sherlock Holmes - Consulting Detective Game");
        QLabel *amount = new QLabel(QString::number(unit23));
        QLabel *price = new QLabel(QString::number(unit23*60.99));
        item23->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item23->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item23->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item23->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item23);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit24>0){
        QLabel *item24 = new QLabel("BBC Sherlock Coffee Mug");
        QLabel *amount = new QLabel(QString::number(unit24));
        QLabel *price = new QLabel(QString::number(unit24*11.95));
        item24->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item24->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item24->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item24->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item24);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit25>0){
        QLabel *item25 = new QLabel("Detective Sherlock Holmes Statue");
        QLabel *amount = new QLabel(QString::number(unit25));
        QLabel *price = new QLabel(QString::number(unit25*63.99));
        item25->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item25->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item25->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item25->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item25);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit26>0){
        QLabel *item26 = new QLabel("BBC Sherlock Figure");
        QLabel *amount = new QLabel(QString::number(unit26));
        QLabel *price = new QLabel(QString::number(unit26*19.87));
        item26->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item26->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item26->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item26->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item26);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }
    if(unit27>0){
        QLabel *item27 = new QLabel("Funko Pop! Sherlock");
        QLabel *amount = new QLabel(QString::number(unit27));
        QLabel *price = new QLabel(QString::number(unit27*9.24));
        item27->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
//        item27->setGeometry(120,20*itemC+(5*itemC2),300,20);
//        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
//        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item27->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
//        item27->show();
//        amount->show();
//        price->show();
        QHBoxLayout *hLayout = new QHBoxLayout();
//        hLayout->setSpacing(5);
        hLayout->addWidget(item27);
        hLayout->addWidget(amount);
        hLayout->addWidget(price);
        vLayout->addLayout(hLayout);
        itemC++;
        itemC2++;
    }


    //if there are items
    if(itemC>3){
        //add scroll area and set the widget
        vLayout->setSpacing(0);
        QScrollArea *scrollArea = new QScrollArea(this);
        scrollArea->setGeometry(120,20*2,450,(20*15)+(5*15));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setStyleSheet("background-color:#43535b");
        QWidget *scrollW = new QWidget();
        scrollW->setFixedSize(450,(20*(itemC-2))+(5*itemC2));
        scrollW->setLayout(vLayout);
        scrollArea->setWidget(scrollW);
        scrollArea->show();
        QLabel *holder = new QLabel(this);
        holder->setGeometry(120,415,450,30);
        holder->setStyleSheet("background-color:#43535b;");
        holder->show();
        QLabel *totalL = new QLabel("Total : $",this);
        totalL->setText(totalL->text()+QString::number(total,'f',2));
        totalL->setGeometry(460,420,100,20);
        totalL->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        totalL->show();

    }else{
        //create the empty checkout
    }

    //if there are no items in the cart
    if(itemC<=3){
        QLabel *empty = new QLabel("Your cart is currently empty.",this);
        empty->setGeometry(120,20*2,500,60);
        empty->setFont(QFont("Verdana",20,QFont::Bold));
//        empty->setStyleSheet("");
        empty->show();
        QLabel *eCart = new QLabel(this);
        eCart->setGeometry(100,20*7,500,421);
//        eCart->setStyleSheet("background-image:/images/images/empty_cart.png");
        eCart->setPixmap(QPixmap(":/images/images/empty_cart.png"));
        eCart->show();
    }
}
void MainWindow::processPendingDatagrams()
{
    //alert the user with a sound
    QSound::play(":/res/sounds/cash.wav");

    //recieve the data
    QByteArray datagram;

    do {
        datagram.resize(udpSocket.pendingDatagramSize());
        udpSocket.readDatagram(datagram.data(), datagram.size());
    } while (udpSocket.hasPendingDatagrams());


    QDataStream in(&datagram, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_4_3);
    in >> name >> add >> city >> state >> zip >> phone >> card >> nameOn >> exp1 >> exp2
            >> unit1  >> unit2  >> unit3
            >> unit4  >> unit5  >> unit6
            >> unit7  >> unit8  >> unit9
            >> unit10 >> unit11 >> unit12
            >> unit13 >> unit14 >> unit15
            >> unit16 >> unit17 >> unit18
            >> unit19 >> unit20 >> unit21
            >> unit22 >> unit23 >> unit24
            >> unit25 >> unit26 >> unit27
            >> total;

    //set the data
    ui->fullnameEdit->setText(name);
    ui->addressEdit->setText(add);
    ui->cityEdit->setText(city);
    ui->stateEdit->setText(state);
    ui->zipEdit->setText(zip);
    ui->phoneEdit->setText(phone);
    ui->cardEdit->setText(card);
    ui->nameOnEdit->setText(nameOn);
    //set the combo box
    ui->month->setText(exp1);
    ui->year->setText(exp2);

    //setup the order
    setup();
}
