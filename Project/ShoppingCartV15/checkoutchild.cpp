#include "checkoutchild.h"
#include "ui_checkoutchild.h"


CheckoutChild::CheckoutChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::CheckoutChild)
{
    ui->setupUi(this);

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
    total=2;
    //fetch the unit counts and set them
//    setup();
    //create the page (yes i wish i had initially set this all up in a vector or something else)
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(dos2()));
    timer->start(20);
    //line-edit connections
    connect(ui->fullNameEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->addressEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->cityEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->stateEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->zipEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->phoneEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->cardEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
    connect(ui->nameOnEdit,SIGNAL(textChanged(QString)),this,SLOT(validate()));
}

CheckoutChild::~CheckoutChild()
{
    delete ui;
}

void CheckoutChild::on_GoTo1_clicked()
{
    emit page1();
}

void CheckoutChild::on_GoTo2_clicked()
{
    emit page2();
}

void CheckoutChild::on_GoTo3_clicked()
{
    emit page3();
}

void CheckoutChild::setup()
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
        item1->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
        item1->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");      //whiten background
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item2->setFixedSize(300,20);
        amount->setFixedSize(60,20);
        price->setFixedSize(60,20);
        item2->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item3->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item4->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item5->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item6->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item7->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item8->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item9->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item10->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item11->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item12->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item13->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item14->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item15->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item16->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item17->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item18->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item19->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item20->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item21->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item22->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item23->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item24->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item25->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item26->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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
        item27->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        QHBoxLayout *hLayout = new QHBoxLayout();
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

void CheckoutChild::grabAll(int u1, int u2, int u3, int u4, int u5, int u6, int u7, int u8, int u9, int u10, int u11, int u12, int u13, int u14, int u15, int u16, int u17, int u18, int u19, int u20, int u21, int u22, int u23, int u24, int u25, int u26, int u27, float tot)
{
//    qDebug() <<"entered grabALL";
    QString tempS;
    unit1=u1, unit2=u2, unit3=u3;
    unit4=u4, unit5=u5, unit6=u6;
    unit7=u7, unit8=u8, unit9=u9;

    unit10=u10, unit11=u11, unit12=u12;
    unit13=u13, unit14=u14, unit15=u15;
    unit16=u16, unit17=u17, unit18=u18;

    unit19=u19, unit20=u20, unit21=u21;
    unit22=u22, unit23=u23, unit24=u24;
    unit25=u25, unit26=u26, unit27=u27;
    total=tot;
    tempS = QString::number(total);
//    ui->Money->setText(tempS);


}

void CheckoutChild::dos2()
{
    timer->stop();
    delete timer;
    emit fetchC();
    emit setup();
}

void CheckoutChild::validate()
{
    bool ok1=false,ok2=false,ok3=false;
    //check to see if all line edits are filled
    ok1 = this->isFilled();
    //check regular expressions
    if(ok1) ok2 = this->regEx();
    //check for more than one item in cart
    if(itemC>3) ok3 = true;
    //check all bools
    if(ok1 && ok2 && ok3){
        ui->subOrder->setEnabled(true);
    }else{
        ui->subOrder->setEnabled(false);
    }
}

bool CheckoutChild::isFilled()
{   //checks to make sure all line Edits are filled
    bool ok = false;
    ok = !ui->fullNameEdit->text().isEmpty()
            && !ui->addressEdit->text().isEmpty()
            && !ui->cityEdit->text().isEmpty()
            && !ui->stateEdit->text().isEmpty()
            && !ui->zipEdit->text().isEmpty()
            && !ui->phoneEdit->text().isEmpty()
            && !ui->cardEdit->text().isEmpty()
            && !ui->nameOnEdit->text().isEmpty();
    return ok;
}

bool CheckoutChild::regEx()
{   //check for matches
    bool one = false,two=false,three=false;
    //regular expressions
    QRegularExpression *zipReg = new QRegularExpression("^[0-9]{5}$");
    QRegularExpression *stateReg = new QRegularExpression("^[A-Z][a-z]$");
    QRegularExpression *phoneReg = new QRegularExpression("^[0-9]{3}-[0-9]{3}-[0-9]{4}$");
    //check zip
    QRegularExpressionMatch *zipMatch = new QRegularExpressionMatch(zipReg->match(ui->zipEdit->text()));
    one = zipMatch->hasMatch();
    //check state
    QRegularExpressionMatch *stateMatch = new QRegularExpressionMatch(stateReg->match(ui->stateEdit->text()));
    two = stateMatch->hasMatch();
    //check phone
    QRegularExpressionMatch *phoneMatch = new QRegularExpressionMatch(phoneReg->match(ui->phoneEdit->text()));
    three = phoneMatch->hasMatch();
    if(one && two && three) return true;
    else return false;
}

void CheckoutChild::on_subOrder_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Confirm Order","Are you sure you want to commit the order?",
                                  QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        //send them datagrams
        sendDatagram();
//        qDebug()<<"submit button :Yes was clicked";
    }else{
        //do nothing
//        qDebug()<<"submit button :No was clicked";
    }
}

void CheckoutChild::sendDatagram()
{
    //grab the combobox values
    QString exp1,exp2;
    exp1 = ui->comboMon->currentText();
    exp2 = ui->comYear->currentText();

    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_3);
    out << ui->fullNameEdit->text() << ui->addressEdit->text() << ui->cityEdit->text()
        << ui->stateEdit->text() << ui->zipEdit->text() << ui->phoneEdit->text()
        << ui->cardEdit->text() << ui->nameOnEdit->text() << exp1 << exp2
        << unit1  << unit2  << unit3
        << unit4  << unit5  << unit6
        << unit7  << unit8  << unit9
        << unit10 << unit11 << unit12
        << unit13 << unit14 << unit15
        << unit16 << unit17 << unit18
        << unit19 << unit20 << unit21
        << unit22 << unit23 << unit24
        << unit25 << unit26 << unit27
        << total;


    udpSocket.writeDatagram(datagram, QHostAddress::LocalHost, 5825);
}
