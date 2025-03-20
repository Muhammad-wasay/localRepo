/********************************************************************************
** Form generated from reading UI file 'addnewuser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWUSER_H
#define UI_ADDNEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ADDNEWUSER
{
public:
    QLabel *label_2;
    QLabel *hblbanklogo;
    QPushButton *pushButton;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ADDNEWUSER)
    {
        if (ADDNEWUSER->objectName().isEmpty())
            ADDNEWUSER->setObjectName("ADDNEWUSER");
        ADDNEWUSER->resize(520, 344);
        label_2 = new QLabel(ADDNEWUSER);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 300, 37, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/HBL-Logo.jpg")));
        label_2->setScaledContents(true);
        hblbanklogo = new QLabel(ADDNEWUSER);
        hblbanklogo->setObjectName("hblbanklogo");
        hblbanklogo->setGeometry(QRect(170, 10, 141, 21));
        hblbanklogo->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        hblbanklogo->setTextFormat(Qt::TextFormat::PlainText);
        pushButton = new QPushButton(ADDNEWUSER);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 310, 31, 18));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(3, 148, 105);\n"
" font: 800 5pt \"Gill Sans\";\n"
"color:black;\n"
""));
        label_10 = new QLabel(ADDNEWUSER);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 0, 624, 344));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/Screenshot 2025-03-19 202201 (1).png")));
        lineEdit_2 = new QLineEdit(ADDNEWUSER);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(268, 140, 171, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        lineEdit_3 = new QLineEdit(ADDNEWUSER);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(268, 180, 171, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        lineEdit_5 = new QLineEdit(ADDNEWUSER);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(268, 100, 171, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        label_4 = new QLabel(ADDNEWUSER);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 96, 159, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        label_6 = new QLabel(ADDNEWUSER);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 140, 159, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        label_5 = new QLabel(ADDNEWUSER);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 180, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 8pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        label_7 = new QLabel(ADDNEWUSER);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 220, 159, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        comboBox = new QComboBox(ADDNEWUSER);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(270, 221, 171, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        pushButton_2 = new QPushButton(ADDNEWUSER);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 290, 71, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(3, 148, 105);\n"
" font: 800 5pt \"Gill Sans\";\n"
"color:black;\n"
""));
        label_10->raise();
        label_2->raise();
        hblbanklogo->raise();
        pushButton->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_5->raise();
        label_4->raise();
        label_6->raise();
        label_5->raise();
        label_7->raise();
        comboBox->raise();
        pushButton_2->raise();

        retranslateUi(ADDNEWUSER);

        QMetaObject::connectSlotsByName(ADDNEWUSER);
    } // setupUi

    void retranslateUi(QWidget *ADDNEWUSER)
    {
        ADDNEWUSER->setWindowTitle(QCoreApplication::translate("ADDNEWUSER", "Form", nullptr));
        label_2->setText(QString());
        hblbanklogo->setText(QCoreApplication::translate("ADDNEWUSER", "  HBL BANK", nullptr));
        pushButton->setText(QCoreApplication::translate("ADDNEWUSER", "back", nullptr));
        label_10->setText(QString());
        label_4->setText(QCoreApplication::translate("ADDNEWUSER", "  ENTER YOUR NAME:", nullptr));
        label_6->setText(QCoreApplication::translate("ADDNEWUSER", "  ENTER YOUR EMAIL:", nullptr));
        label_5->setText(QCoreApplication::translate("ADDNEWUSER", "  CREATE YOUR ACCOUNT PIN:", nullptr));
        label_7->setText(QCoreApplication::translate("ADDNEWUSER", "  ACCOUNT TYPE :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ADDNEWUSER", "Current account", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ADDNEWUSER", "Saving account", nullptr));

        pushButton_2->setText(QCoreApplication::translate("ADDNEWUSER", "create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ADDNEWUSER: public Ui_ADDNEWUSER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWUSER_H
