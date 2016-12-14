/********************************************************************************
** Form generated from reading UI file 'surveylistchild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURVEYLISTCHILD_H
#define UI_SURVEYLISTCHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SurveyListChild
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QPushButton *goback;

    void setupUi(QMdiSubWindow *SurveyListChild)
    {
        if (SurveyListChild->objectName().isEmpty())
            SurveyListChild->setObjectName(QStringLiteral("SurveyListChild"));
        SurveyListChild->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SurveyListChild->sizePolicy().hasHeightForWidth());
        SurveyListChild->setSizePolicy(sizePolicy);
        SurveyListChild->setMaximumSize(QSize(1280, 720));
        scrollArea = new QScrollArea(SurveyListChild);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 10, 1230, 600));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, 0, 1228, 598));
        scrollArea->setWidget(scrollAreaWidget);
        goback = new QPushButton(SurveyListChild);
        goback->setObjectName(QStringLiteral("goback"));
        goback->setGeometry(QRect(1100, 619, 151, 41));

        retranslateUi(SurveyListChild);

        QMetaObject::connectSlotsByName(SurveyListChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *SurveyListChild)
    {
        SurveyListChild->setWindowTitle(QApplication::translate("SurveyListChild", "MainWindow", 0));
        goback->setText(QApplication::translate("SurveyListChild", "Return to Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class SurveyListChild: public Ui_SurveyListChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURVEYLISTCHILD_H
