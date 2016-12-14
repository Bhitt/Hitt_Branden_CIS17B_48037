/********************************************************************************
** Form generated from reading UI file 'createchild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECHILD_H
#define UI_CREATECHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateChild
{
public:
    QLabel *QuestionLabel;
    QLineEdit *questionedit;
    QLabel *Poll1Label;
    QLineEdit *poll1edit;
    QLineEdit *poll2edit;
    QLabel *Poll2Label;
    QLineEdit *poll3edit;
    QLabel *Poll3Label;
    QPushButton *submitbutton;
    QLabel *header;
    QPushButton *returntomenu;

    void setupUi(QMdiSubWindow *CreateChild)
    {
        if (CreateChild->objectName().isEmpty())
            CreateChild->setObjectName(QStringLiteral("CreateChild"));
        CreateChild->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CreateChild->sizePolicy().hasHeightForWidth());
        CreateChild->setSizePolicy(sizePolicy);
        CreateChild->setMinimumSize(QSize(1280, 720));
        CreateChild->setMaximumSize(QSize(1280, 720));
        QuestionLabel = new QLabel(CreateChild);
        QuestionLabel->setObjectName(QStringLiteral("QuestionLabel"));
        QuestionLabel->setGeometry(QRect(60, 170, 221, 31));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic Medium"));
        font.setBold(true);
        font.setWeight(75);
        QuestionLabel->setFont(font);
        questionedit = new QLineEdit(CreateChild);
        questionedit->setObjectName(QStringLiteral("questionedit"));
        questionedit->setGeometry(QRect(330, 170, 481, 31));
        questionedit->setClearButtonEnabled(false);
        Poll1Label = new QLabel(CreateChild);
        Poll1Label->setObjectName(QStringLiteral("Poll1Label"));
        Poll1Label->setGeometry(QRect(60, 270, 261, 31));
        Poll1Label->setFont(font);
        poll1edit = new QLineEdit(CreateChild);
        poll1edit->setObjectName(QStringLiteral("poll1edit"));
        poll1edit->setGeometry(QRect(330, 270, 481, 31));
        poll1edit->setClearButtonEnabled(false);
        poll2edit = new QLineEdit(CreateChild);
        poll2edit->setObjectName(QStringLiteral("poll2edit"));
        poll2edit->setGeometry(QRect(330, 370, 481, 31));
        poll2edit->setClearButtonEnabled(false);
        Poll2Label = new QLabel(CreateChild);
        Poll2Label->setObjectName(QStringLiteral("Poll2Label"));
        Poll2Label->setGeometry(QRect(60, 370, 261, 31));
        Poll2Label->setFont(font);
        poll3edit = new QLineEdit(CreateChild);
        poll3edit->setObjectName(QStringLiteral("poll3edit"));
        poll3edit->setGeometry(QRect(330, 470, 481, 31));
        poll3edit->setClearButtonEnabled(false);
        Poll3Label = new QLabel(CreateChild);
        Poll3Label->setObjectName(QStringLiteral("Poll3Label"));
        Poll3Label->setGeometry(QRect(60, 470, 261, 31));
        Poll3Label->setFont(font);
        submitbutton = new QPushButton(CreateChild);
        submitbutton->setObjectName(QStringLiteral("submitbutton"));
        submitbutton->setGeometry(QRect(40, 590, 201, 61));
        QIcon icon;
        QString iconThemeName = QStringLiteral("round");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        submitbutton->setIcon(icon);
        header = new QLabel(CreateChild);
        header->setObjectName(QStringLiteral("header"));
        header->setGeometry(QRect(336, 32, 531, 101));
        returntomenu = new QPushButton(CreateChild);
        returntomenu->setObjectName(QStringLiteral("returntomenu"));
        returntomenu->setGeometry(QRect(1100, 30, 151, 41));
        returntomenu->setIcon(icon);

        retranslateUi(CreateChild);

        QMetaObject::connectSlotsByName(CreateChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *CreateChild)
    {
        CreateChild->setWindowTitle(QApplication::translate("CreateChild", "MainWindow", 0));
        QuestionLabel->setText(QApplication::translate("CreateChild", "<html><head/><body><p><span style=\" font-size:12pt; color:#1d1d1d;\">Type your question here :</span></p></body></html>", 0));
        questionedit->setPlaceholderText(QApplication::translate("CreateChild", "Input Question Here", 0));
        Poll1Label->setText(QApplication::translate("CreateChild", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter poll option here :</span></p></body></html>", 0));
        poll1edit->setPlaceholderText(QApplication::translate("CreateChild", "Poll Option #1", 0));
        poll2edit->setPlaceholderText(QApplication::translate("CreateChild", "Poll Option #2", 0));
        Poll2Label->setText(QApplication::translate("CreateChild", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter poll option here :</span></p></body></html>", 0));
        poll3edit->setPlaceholderText(QApplication::translate("CreateChild", "Poll Option #3", 0));
        Poll3Label->setText(QApplication::translate("CreateChild", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter poll option here :</span></p></body></html>", 0));
        submitbutton->setText(QApplication::translate("CreateChild", "Create Poll", 0));
        header->setText(QApplication::translate("CreateChild", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:600; text-decoration: underline; color:#000000;\">Create A Survey</span></p></body></html>", 0));
        returntomenu->setText(QApplication::translate("CreateChild", "Return to Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateChild: public Ui_CreateChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHILD_H
