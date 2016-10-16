/********************************************************************************
** Form generated from reading UI file 'expandedimage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPANDEDIMAGE_H
#define UI_EXPANDEDIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpandedImage
{
public:

    void setupUi(QWidget *ExpandedImage)
    {
        if (ExpandedImage->objectName().isEmpty())
            ExpandedImage->setObjectName(QStringLiteral("ExpandedImage"));
        ExpandedImage->resize(400, 300);

        retranslateUi(ExpandedImage);

        QMetaObject::connectSlotsByName(ExpandedImage);
    } // setupUi

    void retranslateUi(QWidget *ExpandedImage)
    {
        ExpandedImage->setWindowTitle(QApplication::translate("ExpandedImage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ExpandedImage: public Ui_ExpandedImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPANDEDIMAGE_H
