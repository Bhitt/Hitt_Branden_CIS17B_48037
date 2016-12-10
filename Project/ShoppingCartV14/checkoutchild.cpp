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


    itemC=3;
    itemC2=0;

    //page 1 items
    if(unit1>0){
        QLabel *item1 = new QLabel("Game of Thrones BluRay S1-S5", this);   //create the labels
        QLabel *amount = new QLabel(QString::number(unit1),this);
        QLabel *price = new QLabel(QString::number(unit1*80.07),this);
        item1->setGeometry(120,20*itemC,300,20);                                   //position them
        amount->setGeometry(430,20*itemC,50,20);
        price->setGeometry(490,20*itemC,50,20);
        item1->setStyleSheet("background-color:#ffffff");                   //whiten background
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item1->show();                                                      //show labels
        amount->show();
        price->show();
        itemC++;
        itemC2++;                                                           //increment item count

    }
    if(unit2>0){
        QLabel *item2 = new QLabel("Game of Thrones BluRay S6", this);
        QLabel *amount = new QLabel(QString::number(unit2),this);
        QLabel *price = new QLabel(QString::number(unit2*39.99),this);
        item2->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item2->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item2->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;

    }
    if(unit3>0){
        QLabel *item3 = new QLabel("Game of Thrones 5 Book Set", this);
        QLabel *amount = new QLabel(QString::number(unit3),this);
        QLabel *price = new QLabel(QString::number(unit3*59.99),this);
        item3->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item3->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item3->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit4>0){
        QLabel *item4 = new QLabel("The World of Ice and Fire", this);
        QLabel *amount = new QLabel(QString::number(unit4),this);
        QLabel *price = new QLabel(QString::number(unit4*29.49),this);
        item4->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item4->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item4->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit5>0){
        QLabel *item5 = new QLabel("Game of Thrones Board Game", this);
        QLabel *amount = new QLabel(QString::number(unit5),this);
        QLabel *price = new QLabel(QString::number(unit5*46.86),this);
        item5->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item5->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item5->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit6>0){
        QLabel *item6 = new QLabel("Game of Thrones Coffee Mug", this);
        QLabel *amount = new QLabel(QString::number(unit6),this);
        QLabel *price = new QLabel(QString::number(unit6*10.51),this);
        item6->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item6->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item6->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit7>0){
        QLabel *item7 = new QLabel("The Iron Throne", this);
        QLabel *amount = new QLabel(QString::number(unit7),this);
        QLabel *price = new QLabel(QString::number(unit7*45.18),this);
        item7->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item7->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item7->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit8>0){
        QLabel *item8 = new QLabel("The Night's King", this);
        QLabel *amount = new QLabel(QString::number(unit8),this);
        QLabel *price = new QLabel(QString::number(unit8*129.99),this);
        item8->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item8->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item8->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit9>0){
        QLabel *item9 = new QLabel("Funko Pop! John Snow", this);
        QLabel *amount = new QLabel(QString::number(unit9),this);
        QLabel *price = new QLabel(QString::number(unit9*11.99),this);
        item9->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item9->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item9->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }

    //page 2 items
    if(unit10>0){
        QLabel *item10 = new QLabel("The Walking Dead BluRay S1-S5", this);
        QLabel *amount = new QLabel(QString::number(unit10),this);
        QLabel *price = new QLabel(QString::number(unit10*77.21),this);
        item10->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item10->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item10->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit11>0){
        QLabel *item11 = new QLabel("The Walking Dead BluRay S6", this);
        QLabel *amount = new QLabel(QString::number(unit11),this);
        QLabel *price = new QLabel(QString::number(unit11*49.99),this);
        item11->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item11->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item11->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit12>0){
        QLabel *item12 = new QLabel("The Walking Dead: Compendium One", this);
        QLabel *amount = new QLabel(QString::number(unit12),this);
        QLabel *price = new QLabel(QString::number(unit12*34.45),this);
        item12->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item12->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item12->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit13>0){
        QLabel *item13 = new QLabel("The Walking Dead: Compendium Two", this);
        QLabel *amount = new QLabel(QString::number(unit13),this);
        QLabel *price = new QLabel(QString::number(unit13*30.50),this);
        item13->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item13->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item13->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit14>0){
        QLabel *item14 = new QLabel("The Walking Dead Board Game", this);
        QLabel *amount = new QLabel(QString::number(unit14),this);
        QLabel *price = new QLabel(QString::number(unit14*25.96),this);
        item14->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item14->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item14->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit15>0){
        QLabel *item15 = new QLabel("The Walking Dead Coffee Mug", this);
        QLabel *amount = new QLabel(QString::number(unit15),this);
        QLabel *price = new QLabel(QString::number(unit15*16.23),this);
        item15->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item15->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item15->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit16>0){
        QLabel *item16 = new QLabel("The Walking Dead - Daryl", this);
        QLabel *amount = new QLabel(QString::number(unit16),this);
        QLabel *price = new QLabel(QString::number(unit16*192.74),this);
        item16->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item16->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item16->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit17>0){
        QLabel *item17 = new QLabel("The Walking Dead - Glenn", this);
        QLabel *amount = new QLabel(QString::number(unit17),this);
        QLabel *price = new QLabel(QString::number(unit17*474.23),this);
        item17->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item17->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item17->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit18>0){
        QLabel *item18 = new QLabel("Funko Pop! Negan", this);
        QLabel *amount = new QLabel(QString::number(unit18),this);
        QLabel *price = new QLabel(QString::number(unit18*15.43),this);
        item18->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item18->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item18->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }

    //page 3 items
    if(unit19>0){
        QLabel *item19 = new QLabel("BBC Sherlock Season One BluRay", this);
        QLabel *amount = new QLabel(QString::number(unit19),this);
        QLabel *price = new QLabel(QString::number(unit19*22.49),this);
        item19->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item19->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item19->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit20>0){
        QLabel *item20 = new QLabel("BBC Sherlock Season Two BluRay", this);
        QLabel *amount = new QLabel(QString::number(unit20),this);
        QLabel *price = new QLabel(QString::number(unit20*20.77),this);
        item20->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item20->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item20->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit21>0){
        QLabel *item21 = new QLabel("The Complete Sherlock Holmes Book", this);
        QLabel *amount = new QLabel(QString::number(unit21),this);
        QLabel *price = new QLabel(QString::number(unit21*28.14),this);
        item21->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item21->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item21->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit22>0){
        QLabel *item22 = new QLabel("The Mind Palace - Coloring Book", this);
        QLabel *amount = new QLabel(QString::number(unit22),this);
        QLabel *price = new QLabel(QString::number(unit22*9.68),this);
        item22->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item22->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item22->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit23>0){
        QLabel *item23 = new QLabel("Sherlock Holmes - Consulting Detective Game", this);
        QLabel *amount = new QLabel(QString::number(unit23),this);
        QLabel *price = new QLabel(QString::number(unit23*60.99),this);
        item23->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item23->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item23->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit24>0){
        QLabel *item24 = new QLabel("BBC Sherlock Coffee Mug", this);
        QLabel *amount = new QLabel(QString::number(unit24),this);
        QLabel *price = new QLabel(QString::number(unit24*11.95),this);
        item24->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item24->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item24->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit25>0){
        QLabel *item25 = new QLabel("Detective Sherlock Holmes Statue", this);
        QLabel *amount = new QLabel(QString::number(unit25),this);
        QLabel *price = new QLabel(QString::number(unit25*63.99),this);
        item25->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item25->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item25->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit26>0){
        QLabel *item26 = new QLabel("BBC Sherlock Figure", this);
        QLabel *amount = new QLabel(QString::number(unit26),this);
        QLabel *price = new QLabel(QString::number(unit26*19.87),this);
        item26->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item26->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item26->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }
    if(unit27>0){
        QLabel *item27 = new QLabel("Funko Pop! Sherlock", this);
        QLabel *amount = new QLabel(QString::number(unit27),this);
        QLabel *price = new QLabel(QString::number(unit27*9.24),this);
        item27->setGeometry(120,20*itemC+(5*itemC2),300,20);
        amount->setGeometry(430,20*itemC+(5*itemC2),50,20);
        price->setGeometry(490,20*itemC+(5*itemC2),50,20);
        item27->setStyleSheet("background-color:#ffffff");
        amount->setStyleSheet("background-color:#ffffff;qproperty-alignment:AlignCenter;");
        price->setStyleSheet("background-color:#ffffff;qproperty-alignment: 'AlignCenter|AlignRight';");
        item27->show();
        amount->show();
        price->show();
        itemC++;
        itemC2++;
    }


    //if there are items
    if(itemC>3){
        //add the order background
        QLabel *ordBack = new QLabel("",this);
        ordBack->setGeometry(120,20*2,420,20*(itemC-2)+(5*itemC2));
        ordBack->setStyleSheet("background-color:#4e535b;");
        ordBack->show();
        ordBack->lower();                                           //lowers the background label to the bottom of the stack
        //add the headers
        QLabel *header1 = new QLabel("Name",this);
        QLabel *header2 = new QLabel("Amount",this);
        QLabel *header3 = new QLabel("Price",this);
        header1->setGeometry(120,20*2,300,20);
        header2->setGeometry(430,20*2,50,20);
        header3->setGeometry(490,20*2,50,20);
        header1->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header2->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header3->setStyleSheet("background-color:#d3d3d3;qproperty-alignment: AlignCenter;");
        header1->show();
        header2->show();
        header3->show();
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
    ui->Money->setText(tempS);


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
        //emit the signal
//        qDebug()<<"submit button :Yes was clicked";
    }else{
        //do nothing
//        qDebug()<<"submit button :No was clicked";
    }
}
