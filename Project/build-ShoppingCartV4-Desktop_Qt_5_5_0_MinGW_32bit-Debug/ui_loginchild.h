/********************************************************************************
** Form generated from reading UI file 'loginchild.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINCHILD_H
#define UI_LOGINCHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginChild
{
public:
    QLineEdit *nameEdit;
    QLabel *label;
    QLabel *UserName;
    QLabel *Password;
    QLineEdit *passEdit;
    QPushButton *Submit;
    QPushButton *pushButton_2;
    QCheckBox *showChar;

    void setupUi(QMdiSubWindow *LoginChild)
    {
        if (LoginChild->objectName().isEmpty())
            LoginChild->setObjectName(QStringLiteral("LoginChild"));
        LoginChild->setWindowModality(Qt::NonModal);
        LoginChild->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginChild->sizePolicy().hasHeightForWidth());
        LoginChild->setSizePolicy(sizePolicy);
        LoginChild->setMaximumSize(QSize(500, 300));
        LoginChild->setStyleSheet(QStringLiteral("#LoginChild { background-image: url(:/images/images/LoginBG.png); }"));
        nameEdit = new QLineEdit(LoginChild);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(180, 110, 151, 20));
        label = new QLabel(LoginChild);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 100, 32));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        label->setFont(font);
        UserName = new QLabel(LoginChild);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(60, 110, 113, 21));
        UserName->setFont(font);
        Password = new QLabel(LoginChild);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(60, 150, 111, 21));
        Password->setFont(font);
        passEdit = new QLineEdit(LoginChild);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(180, 150, 151, 21));
        passEdit->setEchoMode(QLineEdit::Password);
        Submit = new QPushButton(LoginChild);
        Submit->setObjectName(QStringLiteral("Submit"));
        Submit->setEnabled(true);
        Submit->setGeometry(QRect(410, 260, 75, 23));
        sizePolicy.setHeightForWidth(Submit->sizePolicy().hasHeightForWidth());
        Submit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        Submit->setFont(font1);
        pushButton_2 = new QPushButton(LoginChild);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 260, 131, 23));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("color: green;"));
        pushButton_2->setFlat(true);
        showChar = new QCheckBox(LoginChild);
        showChar->setObjectName(QStringLiteral("showChar"));
        showChar->setGeometry(QRect(340, 150, 111, 17));

        retranslateUi(LoginChild);
        QObject::connect(showChar, SIGNAL(toggled(bool)), LoginChild, SLOT(showPass()));
        QObject::connect(Submit, SIGNAL(clicked()), LoginChild, SLOT(subPush()));

        QMetaObject::connectSlotsByName(LoginChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *LoginChild)
    {
        LoginChild->setWindowTitle(QApplication::translate("LoginChild", "Log-In", 0));
        label->setText(QApplication::translate("LoginChild", "<html><head/><body><p><span style=\" font-size:20pt; text-decoration: underline; color:#000000;\">LOG-IN</span></p></body></html>", 0));
        UserName->setText(QApplication::translate("LoginChild", "<html><head/><body><p><span style=\" font-size:14pt;\">User Name:</span></p></body></html>", 0));
        Password->setText(QApplication::translate("LoginChild", "<html><head/><body><p><span style=\" font-size:14pt;\">Password  :</span></p></body></html>", 0));
        Submit->setText(QApplication::translate("LoginChild", "Submit", 0));
        pushButton_2->setText(QApplication::translate("LoginChild", "Create a new account", 0));
        showChar->setText(QApplication::translate("LoginChild", "Show Characters", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginChild: public Ui_LoginChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINCHILD_H
