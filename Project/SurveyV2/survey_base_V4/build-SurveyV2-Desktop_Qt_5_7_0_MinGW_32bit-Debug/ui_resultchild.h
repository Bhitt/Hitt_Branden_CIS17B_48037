/********************************************************************************
** Form generated from reading UI file 'resultchild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTCHILD_H
#define UI_RESULTCHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ResultChild
{
public:
    QProgressBar *prog1;
    QLabel *ans1;
    QProgressBar *prog2;
    QLabel *ans2;
    QLabel *ans3;
    QProgressBar *prog3;
    QLabel *label;
    QPushButton *gotomenu;

    void setupUi(QMdiSubWindow *ResultChild)
    {
        if (ResultChild->objectName().isEmpty())
            ResultChild->setObjectName(QStringLiteral("ResultChild"));
        ResultChild->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResultChild->sizePolicy().hasHeightForWidth());
        ResultChild->setSizePolicy(sizePolicy);
        ResultChild->setMaximumSize(QSize(1280, 720));
        prog1 = new QProgressBar(ResultChild);
        prog1->setObjectName(QStringLiteral("prog1"));
        prog1->setGeometry(QRect(40, 220, 871, 61));
        sizePolicy.setHeightForWidth(prog1->sizePolicy().hasHeightForWidth());
        prog1->setSizePolicy(sizePolicy);
        prog1->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #FF0000;\n"
"     width: 20px;\n"
" }"));
        prog1->setValue(24);
        prog1->setTextVisible(false);
        ans1 = new QLabel(ResultChild);
        ans1->setObjectName(QStringLiteral("ans1"));
        ans1->setGeometry(QRect(40, 140, 871, 61));
        ans1->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"border-radius: 5px;\n"
"background-color: transparent;"));
        prog2 = new QProgressBar(ResultChild);
        prog2->setObjectName(QStringLiteral("prog2"));
        prog2->setGeometry(QRect(40, 410, 871, 61));
        sizePolicy.setHeightForWidth(prog2->sizePolicy().hasHeightForWidth());
        prog2->setSizePolicy(sizePolicy);
        prog2->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #FF0000;\n"
"     width: 20px;\n"
" }"));
        prog2->setValue(24);
        prog2->setTextVisible(false);
        ans2 = new QLabel(ResultChild);
        ans2->setObjectName(QStringLiteral("ans2"));
        ans2->setGeometry(QRect(40, 330, 871, 61));
        ans2->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"border-radius: 5px;\n"
"background-color: transparent;"));
        ans3 = new QLabel(ResultChild);
        ans3->setObjectName(QStringLiteral("ans3"));
        ans3->setGeometry(QRect(40, 520, 871, 61));
        ans3->setStyleSheet(QLatin1String("border: 2px solid grey;\n"
"border-radius: 5px;\n"
"background-color: transparent;"));
        prog3 = new QProgressBar(ResultChild);
        prog3->setObjectName(QStringLiteral("prog3"));
        prog3->setGeometry(QRect(40, 600, 871, 61));
        sizePolicy.setHeightForWidth(prog3->sizePolicy().hasHeightForWidth());
        prog3->setSizePolicy(sizePolicy);
        prog3->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #FF0000;\n"
"     width: 20px;\n"
" }"));
        prog3->setValue(24);
        prog3->setTextVisible(false);
        label = new QLabel(ResultChild);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 20, 1280, 61));
        gotomenu = new QPushButton(ResultChild);
        gotomenu->setObjectName(QStringLiteral("gotomenu"));
        gotomenu->setGeometry(QRect(1080, 600, 151, 61));

        retranslateUi(ResultChild);

        QMetaObject::connectSlotsByName(ResultChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *ResultChild)
    {
        ResultChild->setWindowTitle(QApplication::translate("ResultChild", "MainWindow", 0));
        ans1->setText(QApplication::translate("ResultChild", "Answer1", 0));
        ans2->setText(QApplication::translate("ResultChild", "Answer2", 0));
        ans3->setText(QApplication::translate("ResultChild", "Answer3", 0));
        label->setText(QApplication::translate("ResultChild", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Question</span></p></body></html>", 0));
        gotomenu->setText(QApplication::translate("ResultChild", "Return to Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class ResultChild: public Ui_ResultChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTCHILD_H
