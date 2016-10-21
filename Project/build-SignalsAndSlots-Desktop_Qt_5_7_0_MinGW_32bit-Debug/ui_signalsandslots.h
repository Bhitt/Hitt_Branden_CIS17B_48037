/********************************************************************************
** Form generated from reading UI file 'signalsandslots.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALSANDSLOTS_H
#define UI_SIGNALSANDSLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalsAndSlots
{
public:
    QWidget *centralWidget;
    QLabel *Test;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignalsAndSlots)
    {
        if (SignalsAndSlots->objectName().isEmpty())
            SignalsAndSlots->setObjectName(QStringLiteral("SignalsAndSlots"));
        SignalsAndSlots->resize(400, 300);
        centralWidget = new QWidget(SignalsAndSlots);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Test = new QLabel(centralWidget);
        Test->setObjectName(QStringLiteral("Test"));
        Test->setGeometry(QRect(50, 170, 47, 13));
        SignalsAndSlots->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SignalsAndSlots);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        SignalsAndSlots->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignalsAndSlots);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SignalsAndSlots->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SignalsAndSlots);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SignalsAndSlots->setStatusBar(statusBar);

        retranslateUi(SignalsAndSlots);

        QMetaObject::connectSlotsByName(SignalsAndSlots);
    } // setupUi

    void retranslateUi(QMainWindow *SignalsAndSlots)
    {
        SignalsAndSlots->setWindowTitle(QApplication::translate("SignalsAndSlots", "SignalsAndSlots", 0));
        Test->setText(QApplication::translate("SignalsAndSlots", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class SignalsAndSlots: public Ui_SignalsAndSlots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALSANDSLOTS_H
