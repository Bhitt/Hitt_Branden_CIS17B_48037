/********************************************************************************
** Form generated from reading UI file 'registerchild.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERCHILD_H
#define UI_REGISTERCHILD_H

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

class Ui_RegisterChild
{
public:
    QLineEdit *nameEdit;
    QLabel *label;
    QLabel *UserName;
    QLabel *Password;
    QLineEdit *passEdit;
    QPushButton *Submit;
    QCheckBox *showChar;
    QLabel *Warning;
    QLabel *Confirm;
    QLabel *nothing;
    QLabel *nothing2;
    QLineEdit *confirmEdit;
    QPushButton *Back;

    void setupUi(QMdiSubWindow *RegisterChild)
    {
        if (RegisterChild->objectName().isEmpty())
            RegisterChild->setObjectName(QStringLiteral("RegisterChild"));
        RegisterChild->setWindowModality(Qt::NonModal);
        RegisterChild->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterChild->sizePolicy().hasHeightForWidth());
        RegisterChild->setSizePolicy(sizePolicy);
        RegisterChild->setMaximumSize(QSize(500, 300));
        RegisterChild->setStyleSheet(QLatin1String("#RegisterChild {\n"
"background-image: url(:/images/images/RegBG.png);\n"
"}"));
        nameEdit = new QLineEdit(RegisterChild);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setGeometry(QRect(180, 110, 151, 20));
        label = new QLabel(RegisterChild);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 111, 32));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        label->setFont(font);
        UserName = new QLabel(RegisterChild);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(60, 110, 113, 21));
        UserName->setFont(font);
        Password = new QLabel(RegisterChild);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(59, 150, 91, 21));
        Password->setFont(font);
        passEdit = new QLineEdit(RegisterChild);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(180, 150, 151, 21));
        passEdit->setEchoMode(QLineEdit::Password);
        Submit = new QPushButton(RegisterChild);
        Submit->setObjectName(QStringLiteral("Submit"));
        Submit->setEnabled(false);
        Submit->setGeometry(QRect(410, 260, 75, 23));
        sizePolicy.setHeightForWidth(Submit->sizePolicy().hasHeightForWidth());
        Submit->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(10);
        Submit->setFont(font1);
        showChar = new QCheckBox(RegisterChild);
        showChar->setObjectName(QStringLiteral("showChar"));
        showChar->setGeometry(QRect(340, 150, 111, 17));
        Warning = new QLabel(RegisterChild);
        Warning->setObjectName(QStringLiteral("Warning"));
        Warning->setGeometry(QRect(50, 180, 311, 61));
        Confirm = new QLabel(RegisterChild);
        Confirm->setObjectName(QStringLiteral("Confirm"));
        Confirm->setGeometry(QRect(60, 190, 81, 21));
        Confirm->setFont(font);
        nothing = new QLabel(RegisterChild);
        nothing->setObjectName(QStringLiteral("nothing"));
        nothing->setGeometry(QRect(164, 190, 21, 21));
        nothing->setFont(font);
        nothing2 = new QLabel(RegisterChild);
        nothing2->setObjectName(QStringLiteral("nothing2"));
        nothing2->setGeometry(QRect(164, 150, 21, 21));
        nothing2->setFont(font);
        confirmEdit = new QLineEdit(RegisterChild);
        confirmEdit->setObjectName(QStringLiteral("confirmEdit"));
        confirmEdit->setGeometry(QRect(180, 190, 151, 21));
        confirmEdit->setEchoMode(QLineEdit::Password);
        Back = new QPushButton(RegisterChild);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setEnabled(true);
        Back->setGeometry(QRect(320, 260, 75, 23));
        sizePolicy.setHeightForWidth(Back->sizePolicy().hasHeightForWidth());
        Back->setSizePolicy(sizePolicy);
        Back->setFont(font1);

        retranslateUi(RegisterChild);
        QObject::connect(showChar, SIGNAL(toggled(bool)), RegisterChild, SLOT(showPass()));

        QMetaObject::connectSlotsByName(RegisterChild);
    } // setupUi

    void retranslateUi(QMdiSubWindow *RegisterChild)
    {
        RegisterChild->setWindowTitle(QApplication::translate("RegisterChild", "Log-In", 0));
        label->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:20pt; text-decoration: underline; color:#000000;\">Register</span></p></body></html>", 0));
        UserName->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:14pt;\">User Name:</span></p></body></html>", 0));
        Password->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:14pt;\">Password</span></p></body></html>", 0));
        Submit->setText(QApplication::translate("RegisterChild", "Submit", 0));
        showChar->setText(QApplication::translate("RegisterChild", "Show Characters", 0));
        Warning->setText(QString());
        Confirm->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:14pt;\">Confirm</span></p></body></html>", 0));
        nothing->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:14pt;\">:</span></p></body></html>", 0));
        nothing2->setText(QApplication::translate("RegisterChild", "<html><head/><body><p><span style=\" font-size:14pt;\">:</span></p></body></html>", 0));
        Back->setText(QApplication::translate("RegisterChild", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterChild: public Ui_RegisterChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERCHILD_H
