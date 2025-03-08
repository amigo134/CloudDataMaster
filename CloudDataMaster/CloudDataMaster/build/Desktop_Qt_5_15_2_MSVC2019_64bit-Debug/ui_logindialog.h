/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *labelSecretId;
    QLineEdit *lineSecretId;
    QLineEdit *lineSecretKey;
    QLabel *labelSecretKey;
    QLineEdit *lineRemark;
    QLabel *labelRemark;
    QPushButton *btnLogin;
    QCheckBox *checkSaveSection;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 450);
        labelSecretId = new QLabel(LoginDialog);
        labelSecretId->setObjectName(QString::fromUtf8("labelSecretId"));
        labelSecretId->setGeometry(QRect(50, 30, 300, 30));
        lineSecretId = new QLineEdit(LoginDialog);
        lineSecretId->setObjectName(QString::fromUtf8("lineSecretId"));
        lineSecretId->setGeometry(QRect(50, 60, 300, 30));
        lineSecretKey = new QLineEdit(LoginDialog);
        lineSecretKey->setObjectName(QString::fromUtf8("lineSecretKey"));
        lineSecretKey->setGeometry(QRect(50, 150, 300, 30));
        labelSecretKey = new QLabel(LoginDialog);
        labelSecretKey->setObjectName(QString::fromUtf8("labelSecretKey"));
        labelSecretKey->setGeometry(QRect(50, 120, 300, 30));
        lineRemark = new QLineEdit(LoginDialog);
        lineRemark->setObjectName(QString::fromUtf8("lineRemark"));
        lineRemark->setGeometry(QRect(50, 240, 300, 30));
        labelRemark = new QLabel(LoginDialog);
        labelRemark->setObjectName(QString::fromUtf8("labelRemark"));
        labelRemark->setGeometry(QRect(50, 210, 300, 30));
        btnLogin = new QPushButton(LoginDialog);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(50, 350, 300, 30));
        checkSaveSection = new QCheckBox(LoginDialog);
        checkSaveSection->setObjectName(QString::fromUtf8("checkSaveSection"));
        checkSaveSection->setGeometry(QRect(50, 320, 80, 30));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        labelSecretId->setText(QCoreApplication::translate("LoginDialog", "SecretId", nullptr));
        labelSecretKey->setText(QCoreApplication::translate("LoginDialog", "SecretKey", nullptr));
        labelRemark->setText(QCoreApplication::translate("LoginDialog", "\345\244\207\346\263\250", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        checkSaveSection->setText(QCoreApplication::translate("LoginDialog", "\350\256\260\344\275\217\344\274\232\350\257\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
