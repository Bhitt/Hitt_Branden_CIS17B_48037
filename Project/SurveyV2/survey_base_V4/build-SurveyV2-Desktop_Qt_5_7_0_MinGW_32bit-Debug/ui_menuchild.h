/********************************************************************************
** Form generated from reading UI file 'menuchild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUCHILD_H
#define UI_MENUCHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuChild
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *take_button;
    QLabel *label;

    void setupUi(QMdiSubWindow *MenuChild)
    {
        if (MenuChild->objectName().isEmpty())
            MenuChild->setObjectName(QStringLiteral("MenuChild"));
        MenuChild->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MenuChild->sizePolicy().hasHeightForWidth());
        MenuChild->setSizePolicy(sizePolicy);
        MenuChild->setMinimumSize(QSize(1280, 720));
        MenuChild->setMaximumSize(QSize(1280, 720));
        centralwidget = new QWidget(MenuChild);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 100, 30));
        pushButton = new QPushButton(MenuChild);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 400, 271, 61));
        take_button = new QPushButton(MenuChild);
        take_button->setObjectName(QStringLiteral("take_button"));
        take_button->setGeometry(QRect(530, 320, 271, 61));
        label = new QLabel(MenuChild);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 90, 611, 121));

        retranslateUi(MenuChild);

        QMetaObject::connectSlotsByName(MenuChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *MenuChild)
    {
        MenuChild->setWindowTitle(QApplication::translate("MenuChild", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MenuChild", "Create Survey", 0));
        take_button->setText(QApplication::translate("MenuChild", "Take Survey", 0));
        label->setText(QApplication::translate("MenuChild", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600;\">Survey Menu</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuChild: public Ui_MenuChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUCHILD_H
