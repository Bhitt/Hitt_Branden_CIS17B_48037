/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Order;
    QAction *actionLoad_Order;
    QAction *actionSave_Order;
    QAction *actionSave_Order_As;
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralWidget;
    QGroupBox *ItemListing;
    QLabel *Image;
    QLabel *ItemName;
    QLabel *byCompany;
    QLabel *Price;
    QLabel *GetItBy;
    QLabel *DeliveryDate;
    QPushButton *Expand;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *UnitCount;
    QPushButton *AddToCart;
    QGroupBox *ItemListing_2;
    QLabel *Image_14;
    QLabel *ItemName_14;
    QLabel *byCompany_14;
    QLabel *Price_14;
    QLabel *GetItBy_14;
    QLabel *DeliveryDate_12;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_14;
    QSpinBox *UnitCount_14;
    QPushButton *AddToCart_14;
    QLabel *label;
    QGroupBox *ItemListing_3;
    QLabel *Image_15;
    QLabel *ItemName_15;
    QLabel *byCompany_15;
    QLabel *Price_15;
    QLabel *GetItBy_15;
    QLabel *DeliveryDate_13;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_15;
    QSpinBox *UnitCount_15;
    QPushButton *AddToCart_15;
    QGroupBox *ItemListing_4;
    QLabel *Image_16;
    QLabel *ItemName_16;
    QLabel *byCompany_16;
    QLabel *Price_16;
    QLabel *GetItBy_16;
    QLabel *DeliveryDate_14;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *UnitCount_16;
    QPushButton *AddToCart_16;
    QGroupBox *ItemListing_5;
    QLabel *Image_17;
    QLabel *ItemName_17;
    QLabel *byCompany_17;
    QLabel *Price_17;
    QLabel *GetItBy_17;
    QLabel *DeliveryDate_15;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_17;
    QSpinBox *UnitCount_17;
    QPushButton *AddToCart_17;
    QGroupBox *ItemListing_6;
    QLabel *Image_18;
    QLabel *ItemName_18;
    QLabel *byCompany_18;
    QLabel *Price_18;
    QLabel *GetItBy_18;
    QLabel *DeliveryDate_16;
    QWidget *layoutWidget_17;
    QHBoxLayout *horizontalLayout_18;
    QSpinBox *UnitCount_18;
    QPushButton *AddToCart_18;
    QLabel *label_2;
    QGroupBox *ItemListing_7;
    QLabel *Image_19;
    QLabel *ItemName_19;
    QLabel *byCompany_19;
    QLabel *Price_19;
    QLabel *GetItBy_19;
    QLabel *DeliveryDate_17;
    QWidget *layoutWidget_18;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *UnitCount_19;
    QPushButton *AddToCart_19;
    QGroupBox *ItemListing_8;
    QLabel *Image_20;
    QLabel *ItemName_20;
    QLabel *byCompany_20;
    QLabel *Price_20;
    QLabel *GetItBy_20;
    QLabel *DeliveryDate_18;
    QWidget *layoutWidget_19;
    QHBoxLayout *horizontalLayout_20;
    QSpinBox *UnitCount_20;
    QPushButton *AddToCart_20;
    QGroupBox *ItemListing_9;
    QLabel *Image_21;
    QLabel *ItemName_21;
    QLabel *byCompany_21;
    QLabel *Price_21;
    QLabel *GetItBy_21;
    QLabel *DeliveryDate_19;
    QWidget *layoutWidget_20;
    QHBoxLayout *horizontalLayout_21;
    QSpinBox *UnitCount_21;
    QPushButton *AddToCart_21;
    QPushButton *CheckoutButton;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuCheckout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1280, 720));
        MainWindow->setStyleSheet(QStringLiteral("border-top-color: rgb(138, 163, 170);"));
        actionNew_Order = new QAction(MainWindow);
        actionNew_Order->setObjectName(QStringLiteral("actionNew_Order"));
        actionLoad_Order = new QAction(MainWindow);
        actionLoad_Order->setObjectName(QStringLiteral("actionLoad_Order"));
        actionSave_Order = new QAction(MainWindow);
        actionSave_Order->setObjectName(QStringLiteral("actionSave_Order"));
        actionSave_Order_As = new QAction(MainWindow);
        actionSave_Order_As->setObjectName(QStringLiteral("actionSave_Order_As"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ItemListing = new QGroupBox(centralWidget);
        ItemListing->setObjectName(QStringLiteral("ItemListing"));
        ItemListing->setGeometry(QRect(20, 10, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing->sizePolicy().hasHeightForWidth());
        ItemListing->setSizePolicy(sizePolicy);
        ItemListing->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ItemListing->setFlat(false);
        Image = new QLabel(ItemListing);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image->sizePolicy().hasHeightForWidth());
        Image->setSizePolicy(sizePolicy);
        Image->setStyleSheet(QStringLiteral("image: url(:/Images/BluRayS1-S5small.png);"));
        Image->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName = new QLabel(ItemListing);
        ItemName->setObjectName(QStringLiteral("ItemName"));
        ItemName->setGeometry(QRect(170, 10, 211, 21));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        ItemName->setFont(font);
        ItemName->setTextFormat(Qt::RichText);
        byCompany = new QLabel(ItemListing);
        byCompany->setObjectName(QStringLiteral("byCompany"));
        byCompany->setGeometry(QRect(180, 30, 71, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(7);
        byCompany->setFont(font1);
        Price = new QLabel(ItemListing);
        Price->setObjectName(QStringLiteral("Price"));
        Price->setGeometry(QRect(180, 50, 47, 13));
        GetItBy = new QLabel(ItemListing);
        GetItBy->setObjectName(QStringLiteral("GetItBy"));
        GetItBy->setGeometry(QRect(180, 70, 47, 13));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        GetItBy->setFont(font2);
        DeliveryDate = new QLabel(ItemListing);
        DeliveryDate->setObjectName(QStringLiteral("DeliveryDate"));
        DeliveryDate->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate->setFont(font1);
        Expand = new QPushButton(ItemListing);
        Expand->setObjectName(QStringLiteral("Expand"));
        Expand->setGeometry(QRect(130, 122, 31, 31));
        Expand->setStyleSheet(QStringLiteral("background-image: url(:/Images/expand.png);"));
        Expand->setFlat(true);
        layoutWidget = new QWidget(ItemListing);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UnitCount = new QSpinBox(layoutWidget);
        UnitCount->setObjectName(QStringLiteral("UnitCount"));
        UnitCount->setMinimum(1);

        horizontalLayout->addWidget(UnitCount);

        AddToCart = new QPushButton(layoutWidget);
        AddToCart->setObjectName(QStringLiteral("AddToCart"));
        AddToCart->setAutoFillBackground(false);
        AddToCart->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout->addWidget(AddToCart);

        ItemListing_2 = new QGroupBox(centralWidget);
        ItemListing_2->setObjectName(QStringLiteral("ItemListing_2"));
        ItemListing_2->setGeometry(QRect(20, 200, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_2->sizePolicy().hasHeightForWidth());
        ItemListing_2->setSizePolicy(sizePolicy);
        ItemListing_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_14 = new QLabel(ItemListing_2);
        Image_14->setObjectName(QStringLiteral("Image_14"));
        Image_14->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_14->sizePolicy().hasHeightForWidth());
        Image_14->setSizePolicy(sizePolicy);
        Image_14->setStyleSheet(QStringLiteral("image: url(:/Images/TheWorldOfIceAndFiresmall.jpg);"));
        Image_14->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_14 = new QLabel(ItemListing_2);
        ItemName_14->setObjectName(QStringLiteral("ItemName_14"));
        ItemName_14->setGeometry(QRect(170, 10, 211, 21));
        ItemName_14->setFont(font);
        ItemName_14->setTextFormat(Qt::RichText);
        byCompany_14 = new QLabel(ItemListing_2);
        byCompany_14->setObjectName(QStringLiteral("byCompany_14"));
        byCompany_14->setGeometry(QRect(180, 30, 111, 16));
        byCompany_14->setFont(font1);
        Price_14 = new QLabel(ItemListing_2);
        Price_14->setObjectName(QStringLiteral("Price_14"));
        Price_14->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_14 = new QLabel(ItemListing_2);
        GetItBy_14->setObjectName(QStringLiteral("GetItBy_14"));
        GetItBy_14->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_14->setFont(font2);
        DeliveryDate_12 = new QLabel(ItemListing_2);
        DeliveryDate_12->setObjectName(QStringLiteral("DeliveryDate_12"));
        DeliveryDate_12->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_12->setFont(font1);
        layoutWidget_13 = new QWidget(ItemListing_2);
        layoutWidget_13->setObjectName(QStringLiteral("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        UnitCount_14 = new QSpinBox(layoutWidget_13);
        UnitCount_14->setObjectName(QStringLiteral("UnitCount_14"));
        UnitCount_14->setMinimum(1);

        horizontalLayout_14->addWidget(UnitCount_14);

        AddToCart_14 = new QPushButton(layoutWidget_13);
        AddToCart_14->setObjectName(QStringLiteral("AddToCart_14"));
        AddToCart_14->setAutoFillBackground(false);
        AddToCart_14->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_14->addWidget(AddToCart_14);

        label = new QLabel(ItemListing_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 44, 61, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setStrikeOut(true);
        label->setFont(font3);
        label->setTextFormat(Qt::RichText);
        ItemListing_3 = new QGroupBox(centralWidget);
        ItemListing_3->setObjectName(QStringLiteral("ItemListing_3"));
        ItemListing_3->setGeometry(QRect(20, 390, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_3->sizePolicy().hasHeightForWidth());
        ItemListing_3->setSizePolicy(sizePolicy);
        ItemListing_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_15 = new QLabel(ItemListing_3);
        Image_15->setObjectName(QStringLiteral("Image_15"));
        Image_15->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_15->sizePolicy().hasHeightForWidth());
        Image_15->setSizePolicy(sizePolicy);
        Image_15->setStyleSheet(QStringLiteral("image: url(:/Images/TheIronThronesmall.jpg);"));
        Image_15->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_15 = new QLabel(ItemListing_3);
        ItemName_15->setObjectName(QStringLiteral("ItemName_15"));
        ItemName_15->setGeometry(QRect(170, 10, 211, 21));
        ItemName_15->setFont(font);
        ItemName_15->setTextFormat(Qt::RichText);
        byCompany_15 = new QLabel(ItemListing_3);
        byCompany_15->setObjectName(QStringLiteral("byCompany_15"));
        byCompany_15->setGeometry(QRect(180, 30, 111, 16));
        byCompany_15->setFont(font1);
        Price_15 = new QLabel(ItemListing_3);
        Price_15->setObjectName(QStringLiteral("Price_15"));
        Price_15->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_15 = new QLabel(ItemListing_3);
        GetItBy_15->setObjectName(QStringLiteral("GetItBy_15"));
        GetItBy_15->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_15->setFont(font2);
        DeliveryDate_13 = new QLabel(ItemListing_3);
        DeliveryDate_13->setObjectName(QStringLiteral("DeliveryDate_13"));
        DeliveryDate_13->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_13->setFont(font1);
        layoutWidget_14 = new QWidget(ItemListing_3);
        layoutWidget_14->setObjectName(QStringLiteral("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        UnitCount_15 = new QSpinBox(layoutWidget_14);
        UnitCount_15->setObjectName(QStringLiteral("UnitCount_15"));
        UnitCount_15->setMinimum(1);

        horizontalLayout_15->addWidget(UnitCount_15);

        AddToCart_15 = new QPushButton(layoutWidget_14);
        AddToCart_15->setObjectName(QStringLiteral("AddToCart_15"));
        AddToCart_15->setAutoFillBackground(false);
        AddToCart_15->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_15->addWidget(AddToCart_15);

        ItemListing_4 = new QGroupBox(centralWidget);
        ItemListing_4->setObjectName(QStringLiteral("ItemListing_4"));
        ItemListing_4->setGeometry(QRect(440, 10, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_4->sizePolicy().hasHeightForWidth());
        ItemListing_4->setSizePolicy(sizePolicy);
        ItemListing_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_16 = new QLabel(ItemListing_4);
        Image_16->setObjectName(QStringLiteral("Image_16"));
        Image_16->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_16->sizePolicy().hasHeightForWidth());
        Image_16->setSizePolicy(sizePolicy);
        Image_16->setStyleSheet(QStringLiteral("image: url(:/Images/BluRayS6small.jpg);"));
        Image_16->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_16 = new QLabel(ItemListing_4);
        ItemName_16->setObjectName(QStringLiteral("ItemName_16"));
        ItemName_16->setGeometry(QRect(170, 10, 211, 21));
        ItemName_16->setFont(font);
        ItemName_16->setTextFormat(Qt::RichText);
        byCompany_16 = new QLabel(ItemListing_4);
        byCompany_16->setObjectName(QStringLiteral("byCompany_16"));
        byCompany_16->setGeometry(QRect(180, 30, 71, 16));
        byCompany_16->setFont(font1);
        Price_16 = new QLabel(ItemListing_4);
        Price_16->setObjectName(QStringLiteral("Price_16"));
        Price_16->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_16 = new QLabel(ItemListing_4);
        GetItBy_16->setObjectName(QStringLiteral("GetItBy_16"));
        GetItBy_16->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_16->setFont(font2);
        DeliveryDate_14 = new QLabel(ItemListing_4);
        DeliveryDate_14->setObjectName(QStringLiteral("DeliveryDate_14"));
        DeliveryDate_14->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_14->setFont(font1);
        layoutWidget_15 = new QWidget(ItemListing_4);
        layoutWidget_15->setObjectName(QStringLiteral("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        UnitCount_16 = new QSpinBox(layoutWidget_15);
        UnitCount_16->setObjectName(QStringLiteral("UnitCount_16"));
        UnitCount_16->setMinimum(1);

        horizontalLayout_16->addWidget(UnitCount_16);

        AddToCart_16 = new QPushButton(layoutWidget_15);
        AddToCart_16->setObjectName(QStringLiteral("AddToCart_16"));
        AddToCart_16->setAutoFillBackground(false);
        AddToCart_16->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_16->addWidget(AddToCart_16);

        ItemListing_5 = new QGroupBox(centralWidget);
        ItemListing_5->setObjectName(QStringLiteral("ItemListing_5"));
        ItemListing_5->setGeometry(QRect(440, 200, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_5->sizePolicy().hasHeightForWidth());
        ItemListing_5->setSizePolicy(sizePolicy);
        ItemListing_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_17 = new QLabel(ItemListing_5);
        Image_17->setObjectName(QStringLiteral("Image_17"));
        Image_17->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_17->sizePolicy().hasHeightForWidth());
        Image_17->setSizePolicy(sizePolicy);
        Image_17->setStyleSheet(QStringLiteral("image: url(:/Images/GoTBoardGamesmall.jpg);"));
        Image_17->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_17 = new QLabel(ItemListing_5);
        ItemName_17->setObjectName(QStringLiteral("ItemName_17"));
        ItemName_17->setGeometry(QRect(170, 10, 221, 21));
        ItemName_17->setFont(font);
        ItemName_17->setTextFormat(Qt::RichText);
        byCompany_17 = new QLabel(ItemListing_5);
        byCompany_17->setObjectName(QStringLiteral("byCompany_17"));
        byCompany_17->setGeometry(QRect(180, 30, 121, 16));
        byCompany_17->setFont(font1);
        Price_17 = new QLabel(ItemListing_5);
        Price_17->setObjectName(QStringLiteral("Price_17"));
        Price_17->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_17 = new QLabel(ItemListing_5);
        GetItBy_17->setObjectName(QStringLiteral("GetItBy_17"));
        GetItBy_17->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_17->setFont(font2);
        DeliveryDate_15 = new QLabel(ItemListing_5);
        DeliveryDate_15->setObjectName(QStringLiteral("DeliveryDate_15"));
        DeliveryDate_15->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_15->setFont(font1);
        layoutWidget_16 = new QWidget(ItemListing_5);
        layoutWidget_16->setObjectName(QStringLiteral("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        UnitCount_17 = new QSpinBox(layoutWidget_16);
        UnitCount_17->setObjectName(QStringLiteral("UnitCount_17"));
        UnitCount_17->setMinimum(1);

        horizontalLayout_17->addWidget(UnitCount_17);

        AddToCart_17 = new QPushButton(layoutWidget_16);
        AddToCart_17->setObjectName(QStringLiteral("AddToCart_17"));
        AddToCart_17->setAutoFillBackground(false);
        AddToCart_17->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_17->addWidget(AddToCart_17);

        ItemListing_6 = new QGroupBox(centralWidget);
        ItemListing_6->setObjectName(QStringLiteral("ItemListing_6"));
        ItemListing_6->setGeometry(QRect(440, 390, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_6->sizePolicy().hasHeightForWidth());
        ItemListing_6->setSizePolicy(sizePolicy);
        ItemListing_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_18 = new QLabel(ItemListing_6);
        Image_18->setObjectName(QStringLiteral("Image_18"));
        Image_18->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_18->sizePolicy().hasHeightForWidth());
        Image_18->setSizePolicy(sizePolicy);
        Image_18->setStyleSheet(QStringLiteral("image: url(:/Images/TheNightKingsmall.jpg);"));
        Image_18->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_18 = new QLabel(ItemListing_6);
        ItemName_18->setObjectName(QStringLiteral("ItemName_18"));
        ItemName_18->setGeometry(QRect(160, 10, 231, 21));
        ItemName_18->setFont(font);
        ItemName_18->setTextFormat(Qt::RichText);
        byCompany_18 = new QLabel(ItemListing_6);
        byCompany_18->setObjectName(QStringLiteral("byCompany_18"));
        byCompany_18->setGeometry(QRect(180, 30, 121, 16));
        byCompany_18->setFont(font1);
        Price_18 = new QLabel(ItemListing_6);
        Price_18->setObjectName(QStringLiteral("Price_18"));
        Price_18->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_18 = new QLabel(ItemListing_6);
        GetItBy_18->setObjectName(QStringLiteral("GetItBy_18"));
        GetItBy_18->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_18->setFont(font2);
        DeliveryDate_16 = new QLabel(ItemListing_6);
        DeliveryDate_16->setObjectName(QStringLiteral("DeliveryDate_16"));
        DeliveryDate_16->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_16->setFont(font1);
        layoutWidget_17 = new QWidget(ItemListing_6);
        layoutWidget_17->setObjectName(QStringLiteral("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_17);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        UnitCount_18 = new QSpinBox(layoutWidget_17);
        UnitCount_18->setObjectName(QStringLiteral("UnitCount_18"));
        UnitCount_18->setMinimum(1);

        horizontalLayout_18->addWidget(UnitCount_18);

        AddToCart_18 = new QPushButton(layoutWidget_17);
        AddToCart_18->setObjectName(QStringLiteral("AddToCart_18"));
        AddToCart_18->setAutoFillBackground(false);
        AddToCart_18->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_18->addWidget(AddToCart_18);

        label_2 = new QLabel(ItemListing_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 50, 91, 16));
        ItemListing_7 = new QGroupBox(centralWidget);
        ItemListing_7->setObjectName(QStringLiteral("ItemListing_7"));
        ItemListing_7->setGeometry(QRect(860, 10, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_7->sizePolicy().hasHeightForWidth());
        ItemListing_7->setSizePolicy(sizePolicy);
        ItemListing_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_19 = new QLabel(ItemListing_7);
        Image_19->setObjectName(QStringLiteral("Image_19"));
        Image_19->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_19->sizePolicy().hasHeightForWidth());
        Image_19->setSizePolicy(sizePolicy);
        Image_19->setStyleSheet(QStringLiteral("image: url(:/Images/GameOfThronesBookssmall.jpg);"));
        Image_19->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_19 = new QLabel(ItemListing_7);
        ItemName_19->setObjectName(QStringLiteral("ItemName_19"));
        ItemName_19->setGeometry(QRect(170, 10, 211, 21));
        ItemName_19->setFont(font);
        ItemName_19->setTextFormat(Qt::RichText);
        byCompany_19 = new QLabel(ItemListing_7);
        byCompany_19->setObjectName(QStringLiteral("byCompany_19"));
        byCompany_19->setGeometry(QRect(180, 30, 121, 16));
        byCompany_19->setFont(font1);
        Price_19 = new QLabel(ItemListing_7);
        Price_19->setObjectName(QStringLiteral("Price_19"));
        Price_19->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_19 = new QLabel(ItemListing_7);
        GetItBy_19->setObjectName(QStringLiteral("GetItBy_19"));
        GetItBy_19->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_19->setFont(font2);
        DeliveryDate_17 = new QLabel(ItemListing_7);
        DeliveryDate_17->setObjectName(QStringLiteral("DeliveryDate_17"));
        DeliveryDate_17->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_17->setFont(font1);
        layoutWidget_18 = new QWidget(ItemListing_7);
        layoutWidget_18->setObjectName(QStringLiteral("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_18);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        UnitCount_19 = new QSpinBox(layoutWidget_18);
        UnitCount_19->setObjectName(QStringLiteral("UnitCount_19"));
        UnitCount_19->setMinimum(1);

        horizontalLayout_19->addWidget(UnitCount_19);

        AddToCart_19 = new QPushButton(layoutWidget_18);
        AddToCart_19->setObjectName(QStringLiteral("AddToCart_19"));
        AddToCart_19->setAutoFillBackground(false);
        AddToCart_19->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_19->addWidget(AddToCart_19);

        ItemListing_8 = new QGroupBox(centralWidget);
        ItemListing_8->setObjectName(QStringLiteral("ItemListing_8"));
        ItemListing_8->setGeometry(QRect(860, 200, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_8->sizePolicy().hasHeightForWidth());
        ItemListing_8->setSizePolicy(sizePolicy);
        ItemListing_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_20 = new QLabel(ItemListing_8);
        Image_20->setObjectName(QStringLiteral("Image_20"));
        Image_20->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_20->sizePolicy().hasHeightForWidth());
        Image_20->setSizePolicy(sizePolicy);
        Image_20->setStyleSheet(QStringLiteral("image: url(:/Images/GoTCoffeeMugsmall.jpg);"));
        Image_20->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_20 = new QLabel(ItemListing_8);
        ItemName_20->setObjectName(QStringLiteral("ItemName_20"));
        ItemName_20->setGeometry(QRect(170, 10, 211, 21));
        ItemName_20->setFont(font);
        ItemName_20->setTextFormat(Qt::RichText);
        byCompany_20 = new QLabel(ItemListing_8);
        byCompany_20->setObjectName(QStringLiteral("byCompany_20"));
        byCompany_20->setGeometry(QRect(180, 30, 111, 16));
        byCompany_20->setFont(font1);
        Price_20 = new QLabel(ItemListing_8);
        Price_20->setObjectName(QStringLiteral("Price_20"));
        Price_20->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_20 = new QLabel(ItemListing_8);
        GetItBy_20->setObjectName(QStringLiteral("GetItBy_20"));
        GetItBy_20->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_20->setFont(font2);
        DeliveryDate_18 = new QLabel(ItemListing_8);
        DeliveryDate_18->setObjectName(QStringLiteral("DeliveryDate_18"));
        DeliveryDate_18->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_18->setFont(font1);
        layoutWidget_19 = new QWidget(ItemListing_8);
        layoutWidget_19->setObjectName(QStringLiteral("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget_19);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        UnitCount_20 = new QSpinBox(layoutWidget_19);
        UnitCount_20->setObjectName(QStringLiteral("UnitCount_20"));
        UnitCount_20->setMinimum(1);

        horizontalLayout_20->addWidget(UnitCount_20);

        AddToCart_20 = new QPushButton(layoutWidget_19);
        AddToCart_20->setObjectName(QStringLiteral("AddToCart_20"));
        AddToCart_20->setAutoFillBackground(false);
        AddToCart_20->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_20->addWidget(AddToCart_20);

        ItemListing_9 = new QGroupBox(centralWidget);
        ItemListing_9->setObjectName(QStringLiteral("ItemListing_9"));
        ItemListing_9->setGeometry(QRect(860, 390, 400, 171));
        sizePolicy.setHeightForWidth(ItemListing_9->sizePolicy().hasHeightForWidth());
        ItemListing_9->setSizePolicy(sizePolicy);
        ItemListing_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Image_21 = new QLabel(ItemListing_9);
        Image_21->setObjectName(QStringLiteral("Image_21"));
        Image_21->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy.setHeightForWidth(Image_21->sizePolicy().hasHeightForWidth());
        Image_21->setSizePolicy(sizePolicy);
        Image_21->setStyleSheet(QStringLiteral("image: url(:/Images/Pop!JonSnowsmall.jpg);"));
        Image_21->setPixmap(QPixmap(QString::fromUtf8(":/images/shoppingItemPH.png")));
        ItemName_21 = new QLabel(ItemListing_9);
        ItemName_21->setObjectName(QStringLiteral("ItemName_21"));
        ItemName_21->setGeometry(QRect(170, 10, 211, 21));
        ItemName_21->setFont(font);
        ItemName_21->setTextFormat(Qt::RichText);
        byCompany_21 = new QLabel(ItemListing_9);
        byCompany_21->setObjectName(QStringLiteral("byCompany_21"));
        byCompany_21->setGeometry(QRect(180, 30, 131, 16));
        byCompany_21->setFont(font1);
        Price_21 = new QLabel(ItemListing_9);
        Price_21->setObjectName(QStringLiteral("Price_21"));
        Price_21->setGeometry(QRect(180, 50, 47, 13));
        GetItBy_21 = new QLabel(ItemListing_9);
        GetItBy_21->setObjectName(QStringLiteral("GetItBy_21"));
        GetItBy_21->setGeometry(QRect(180, 70, 47, 13));
        GetItBy_21->setFont(font2);
        DeliveryDate_19 = new QLabel(ItemListing_9);
        DeliveryDate_19->setObjectName(QStringLiteral("DeliveryDate_19"));
        DeliveryDate_19->setGeometry(QRect(230, 70, 91, 16));
        DeliveryDate_19->setFont(font1);
        layoutWidget_20 = new QWidget(ItemListing_9);
        layoutWidget_20->setObjectName(QStringLiteral("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(270, 130, 118, 25));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_20);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        UnitCount_21 = new QSpinBox(layoutWidget_20);
        UnitCount_21->setObjectName(QStringLiteral("UnitCount_21"));
        UnitCount_21->setMinimum(1);

        horizontalLayout_21->addWidget(UnitCount_21);

        AddToCart_21 = new QPushButton(layoutWidget_20);
        AddToCart_21->setObjectName(QStringLiteral("AddToCart_21"));
        AddToCart_21->setAutoFillBackground(false);
        AddToCart_21->setStyleSheet(QStringLiteral("background-color: rgb(191, 191, 191)"));

        horizontalLayout_21->addWidget(AddToCart_21);

        CheckoutButton = new QPushButton(centralWidget);
        CheckoutButton->setObjectName(QStringLiteral("CheckoutButton"));
        CheckoutButton->setGeometry(QRect(1120, 590, 141, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1040, 590, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        menuBar->setStyleSheet(QStringLiteral("background-color: rgb(161, 174, 175);"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuCheckout = new QMenu(menuBar);
        menuCheckout->setObjectName(QStringLiteral("menuCheckout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral("background-color: rgb(150, 159, 161);"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuCheckout->menuAction());
        menuFile->addAction(actionNew_Order);
        menuFile->addAction(actionLoad_Order);
        menuFile->addAction(actionSave_Order);
        menuFile->addAction(actionSave_Order_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(Image, SIGNAL(linkActivated(QString)), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew_Order->setText(QApplication::translate("MainWindow", "New Order", 0));
        actionLoad_Order->setText(QApplication::translate("MainWindow", "Load Order", 0));
        actionSave_Order->setText(QApplication::translate("MainWindow", "Save Order", 0));
        actionSave_Order_As->setText(QApplication::translate("MainWindow", "Save Order As", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        ItemListing->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">Game of Thrones - Season 1-5</span></p></body></html>", 0));
        byCompany->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by HBO</span></p></body></html>", 0));
        Price->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$80.07</span></p></body></html>", 0));
        GetItBy->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
        Expand->setText(QString());
#ifndef QT_NO_TOOLTIP
        AddToCart->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_2->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_14->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_14->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_14->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_14->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:400; color:#94c8ff;\">The World of Ice &amp; Fire</span></p></body></html>", 0));
        byCompany_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by George R. R. Martin</span></p></body></html>", 0));
        Price_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$29.49</span></p></body></html>", 0));
        GetItBy_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_14->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_14->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#9c9c9c;\">$50.00</span></p></body></html>", 0));
        ItemListing_3->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_15->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_15->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_15->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_15->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">Game of Thrones: Iron Throne</span></p></body></html>", 0));
        byCompany_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by Dark Horse Deluxe</span></p></body></html>", 0));
        Price_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$45.18</span></p></body></html>", 0));
        GetItBy_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 20</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_15->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_15->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_4->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_16->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_16->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_16->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_16->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">Game of Thrones - Season 6</span></p></body></html>", 0));
        byCompany_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by HBO</span></p></body></html>", 0));
        Price_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$39.99</span></p></body></html>", 0));
        GetItBy_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_16->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_16->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_5->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_17->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_17->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_17->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_17->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-weight:400; color:#94c8ff;\">A Game of Thrones: The Board Game</span></p></body></html>", 0));
        byCompany_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by Christian T. Peterson</span></p></body></html>", 0));
        Price_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$46.86</span></p></body></html>", 0));
        GetItBy_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_17->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_17->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_6->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_18->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_18->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_18->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_18->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">Game of Thrones: The Night's King</span></p></body></html>", 0));
        byCompany_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by Dark Horse Comics</span></p></body></html>", 0));
        Price_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$129.99</span></p></body></html>", 0));
        GetItBy_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 19</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_18->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_18->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#9f9f9f;\">+ $19.99 Shipping</span></p></body></html>", 0));
        ItemListing_7->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_19->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_19->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_19->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_19->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">A Game of Thrones 5-Book Set</span></p></body></html>", 0));
        byCompany_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by George R. R. Martin</span></p></body></html>", 0));
        Price_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$59.99</span></p></body></html>", 0));
        GetItBy_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_19->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_19->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_8->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_20->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_20->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_20->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_20->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400; color:#94c8ff;\">Game of Thrones Coffee Mug</span></p></body></html>", 0));
        byCompany_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by Dark Horse Deluxe</span></p></body></html>", 0));
        Price_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$10.51</span></p></body></html>", 0));
        GetItBy_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_20->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_20->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        ItemListing_9->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        Image_21->setToolTip(QApplication::translate("MainWindow", "Click to Expand", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Image_21->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Image_21->setText(QString());
#ifndef QT_NO_TOOLTIP
        ItemName_21->setToolTip(QApplication::translate("MainWindow", "Item Name", 0));
#endif // QT_NO_TOOLTIP
        ItemName_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:400; color:#94c8ff;\">Funko POP GoT: Jon Snow</span></p></body></html>", 0));
        byCompany_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#afafaf;\">by Funko Pop! Television</span></p></body></html>", 0));
        Price_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#990000;\">$11.99</span></p></body></html>", 0));
        GetItBy_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:7pt; color:#afafaf;\">Get it by</span></p></body></html>", 0));
        DeliveryDate_19->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0caa46;\">Tuesday, Oct 18</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        AddToCart_21->setToolTip(QApplication::translate("MainWindow", "Add to your cart", 0));
#endif // QT_NO_TOOLTIP
        AddToCart_21->setText(QApplication::translate("MainWindow", "Add to Cart", 0));
        CheckoutButton->setText(QApplication::translate("MainWindow", "Proceed To Checkout", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Next Page", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuCheckout->setTitle(QApplication::translate("MainWindow", "Checkout", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
