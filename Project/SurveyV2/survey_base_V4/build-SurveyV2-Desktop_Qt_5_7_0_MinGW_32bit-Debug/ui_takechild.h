/********************************************************************************
** Form generated from reading UI file 'takechild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKECHILD_H
#define UI_TAKECHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_takeChild
{
public:
    QLabel *question;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QPushButton *take_submit;
    QPushButton *take_result;

    void setupUi(QMdiSubWindow *takeChild)
    {
        if (takeChild->objectName().isEmpty())
            takeChild->setObjectName(QStringLiteral("takeChild"));
        takeChild->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(takeChild->sizePolicy().hasHeightForWidth());
        takeChild->setSizePolicy(sizePolicy);
        takeChild->setMaximumSize(QSize(1280, 720));
        question = new QLabel(takeChild);
        question->setObjectName(QStringLiteral("question"));
        question->setGeometry(QRect(280, 40, 751, 61));
        radioButton1 = new QRadioButton(takeChild);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(40, 220, 451, 51));
        radioButton2 = new QRadioButton(takeChild);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(40, 300, 451, 51));
        radioButton3 = new QRadioButton(takeChild);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(40, 380, 451, 51));
        take_submit = new QPushButton(takeChild);
        take_submit->setObjectName(QStringLiteral("take_submit"));
        take_submit->setGeometry(QRect(40, 510, 171, 51));
        take_result = new QPushButton(takeChild);
        take_result->setObjectName(QStringLiteral("take_result"));
        take_result->setGeometry(QRect(620, 510, 171, 51));

        retranslateUi(takeChild);

        QMetaObject::connectSlotsByName(takeChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *takeChild)
    {
        takeChild->setWindowTitle(QApplication::translate("takeChild", "MainWindow", 0));
        question->setText(QApplication::translate("takeChild", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        radioButton1->setText(QString());
        radioButton2->setText(QString());
        radioButton3->setText(QString());
        take_submit->setText(QApplication::translate("takeChild", "Submit", 0));
        take_result->setText(QApplication::translate("takeChild", "Results", 0));
    } // retranslateUi

};

namespace Ui {
    class takeChild: public Ui_takeChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKECHILD_H
