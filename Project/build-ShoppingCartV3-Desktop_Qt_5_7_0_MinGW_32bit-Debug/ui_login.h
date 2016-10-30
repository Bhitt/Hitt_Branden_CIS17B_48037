/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *UserName;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *UserName_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        UserName = new QLabel(Login);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(10, 90, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        UserName->setFont(font);
        UserName->setStyleSheet(QLatin1String("border-top: 2px solid;\n"
"border-top-color: rgb(113, 113, 113);\n"
"border-left: 2px solid;\n"
"border-left-color: rgb(113, 113, 113);\n"
"border-bottom: 2px solid;\n"
"border-bottom-color: rgb(171, 171, 171);\n"
"border-right: 2px solid;\n"
"border-right-color: rgb(171, 171, 171);\n"
"background-color: rgb(208, 208, 208);"));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(300, 260, 75, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-top: 2px solid;\n"
"border-top-color: rgb(113, 113, 113);\n"
"border-left: 2px solid;\n"
"border-left-color: rgb(113, 113, 113);\n"
"border-bottom: 2px solid;\n"
"border-bottom-color: rgb(171, 171, 171);\n"
"border-right: 2px solid;\n"
"border-right-color: rgb(171, 171, 171);\n"
"background-color: rgb(208, 208, 208);"));
        pushButton->setFlat(false);
        lineEdit = new QLineEdit(Login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(142, 89, 231, 31));
        UserName_2 = new QLabel(Login);
        UserName_2->setObjectName(QStringLiteral("UserName_2"));
        UserName_2->setGeometry(QRect(10, 150, 121, 31));
        UserName_2->setFont(font);
        UserName_2->setStyleSheet(QLatin1String("border-top: 2px solid;\n"
"border-top-color: rgb(113, 113, 113);\n"
"border-left: 2px solid;\n"
"border-left-color: rgb(113, 113, 113);\n"
"border-bottom: 2px solid;\n"
"border-bottom-color: rgb(171, 171, 171);\n"
"border-right: 2px solid;\n"
"border-right-color: rgb(171, 171, 171);\n"
"background-color: rgb(208, 208, 208);"));
        lineEdit_2 = new QLineEdit(Login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 150, 231, 31));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 121, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(22);
        font2.setItalic(true);
        label->setFont(font2);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 260, 131, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Verdana"));
        font3.setItalic(true);
        label_2->setFont(font3);

        retranslateUi(Login);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0));
        UserName->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:14pt;\">User Name:</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Login", "Submit", 0));
        UserName_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:14pt;\">Password:</span></p></body></html>", 0));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; font-style:normal; text-decoration: underline; color:#aa0000;\">LOGIN</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" color:#00aa00;\">Create A New Account</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
