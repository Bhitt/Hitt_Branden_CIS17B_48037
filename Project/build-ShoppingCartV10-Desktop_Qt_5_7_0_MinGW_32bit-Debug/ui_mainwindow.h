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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChange_User;
    QAction *actionNew_User;
    QAction *actionSave_Order;
    QAction *actionSave_Order_As;
    QAction *actionLoad_Order;
    QAction *actionExit;
    QAction *actionPage_1;
    QAction *actionPage_2;
    QAction *actionPage_3;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuCheckout;
    QMenu *menuCheckout_2;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

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
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionChange_User = new QAction(MainWindow);
        actionChange_User->setObjectName(QStringLiteral("actionChange_User"));
        actionNew_User = new QAction(MainWindow);
        actionNew_User->setObjectName(QStringLiteral("actionNew_User"));
        actionSave_Order = new QAction(MainWindow);
        actionSave_Order->setObjectName(QStringLiteral("actionSave_Order"));
        actionSave_Order_As = new QAction(MainWindow);
        actionSave_Order_As->setObjectName(QStringLiteral("actionSave_Order_As"));
        actionLoad_Order = new QAction(MainWindow);
        actionLoad_Order->setObjectName(QStringLiteral("actionLoad_Order"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPage_1 = new QAction(MainWindow);
        actionPage_1->setObjectName(QStringLiteral("actionPage_1"));
        actionPage_2 = new QAction(MainWindow);
        actionPage_2->setObjectName(QStringLiteral("actionPage_2"));
        actionPage_3 = new QAction(MainWindow);
        actionPage_3->setObjectName(QStringLiteral("actionPage_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 1280, 720));
        sizePolicy.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        menuBar->setStyleSheet(QLatin1String("#menuBar{\n"
"background-color: rgb(100, 161, 159);\n"
"}"));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuCheckout = new QMenu(menuBar);
        menuCheckout->setObjectName(QStringLiteral("menuCheckout"));
        menuCheckout_2 = new QMenu(menuBar);
        menuCheckout_2->setObjectName(QStringLiteral("menuCheckout_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QLatin1String("#statusBar{\n"
"background-color: rgb(100, 161, 159);\n"
"}"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QLatin1String("#mainToolBar{\n"
"background-color: rgb(157, 213, 211);\n"
"}"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuCheckout->menuAction());
        menuBar->addAction(menuCheckout_2->menuAction());
        menuMenu->addAction(actionChange_User);
        menuMenu->addAction(actionNew_User);
        menuMenu->addSeparator();
        menuMenu->addAction(actionSave_Order);
        menuMenu->addAction(actionSave_Order_As);
        menuMenu->addAction(actionLoad_Order);
        menuMenu->addSeparator();
        menuMenu->addAction(actionExit);
        menuCheckout->addAction(actionPage_1);
        menuCheckout->addAction(actionPage_2);
        menuCheckout->addAction(actionPage_3);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionChange_User, SIGNAL(triggered()), MainWindow, SLOT(crLgSc()));
        QObject::connect(actionPage_1, SIGNAL(triggered()), MainWindow, SLOT(crLiP1()));
        QObject::connect(actionPage_2, SIGNAL(triggered()), MainWindow, SLOT(crLiP2()));
        QObject::connect(actionNew_User, SIGNAL(triggered()), MainWindow, SLOT(crRgSc()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionChange_User->setText(QApplication::translate("MainWindow", "Change User", 0));
        actionNew_User->setText(QApplication::translate("MainWindow", "New User", 0));
        actionSave_Order->setText(QApplication::translate("MainWindow", "Save Order", 0));
        actionSave_Order_As->setText(QApplication::translate("MainWindow", "Save Order As", 0));
        actionLoad_Order->setText(QApplication::translate("MainWindow", "Load Order", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionPage_1->setText(QApplication::translate("MainWindow", "Page 1", 0));
        actionPage_2->setText(QApplication::translate("MainWindow", "Page 2", 0));
        actionPage_3->setText(QApplication::translate("MainWindow", "Page 3", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuCheckout->setTitle(QApplication::translate("MainWindow", "Listings", 0));
        menuCheckout_2->setTitle(QApplication::translate("MainWindow", "Checkout", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
