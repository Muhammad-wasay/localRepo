/********************************************************************************
** Form generated from reading UI file 'transfermoney.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERMONEY_H
#define UI_TRANSFERMONEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TRANSFERMONEY
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *usernameneter_2;
    QLabel *usernameneter_3;
    QLabel *usernameneter_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *myaccount_txt;
    QLineEdit *reciever_txt;
    QLineEdit *amount_txt;

    void setupUi(QWidget *TRANSFERMONEY)
    {
        if (TRANSFERMONEY->objectName().isEmpty())
            TRANSFERMONEY->setObjectName("TRANSFERMONEY");
        TRANSFERMONEY->resize(400, 300);
        label = new QLabel(TRANSFERMONEY);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 141, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label_2 = new QLabel(TRANSFERMONEY);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 401, 301));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Screenshot 2025-03-19 202201 (1).png")));
        label_2->setScaledContents(true);
        usernameneter_2 = new QLabel(TRANSFERMONEY);
        usernameneter_2->setObjectName("usernameneter_2");
        usernameneter_2->setGeometry(QRect(10, 130, 221, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        usernameneter_2->setFont(font);
        usernameneter_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        usernameneter_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        usernameneter_3 = new QLabel(TRANSFERMONEY);
        usernameneter_3->setObjectName("usernameneter_3");
        usernameneter_3->setGeometry(QRect(10, 70, 211, 31));
        usernameneter_3->setFont(font);
        usernameneter_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        usernameneter_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        usernameneter_4 = new QLabel(TRANSFERMONEY);
        usernameneter_4->setObjectName("usernameneter_4");
        usernameneter_4->setGeometry(QRect(10, 190, 111, 31));
        usernameneter_4->setFont(font);
        usernameneter_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"border-color: rgb(0, 0, 0);\n"
"    font-size: 35px;\n"
"  font: 700 9pt \"Segoe UI\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        usernameneter_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(TRANSFERMONEY);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 250, 37, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/HBL-Logo.jpg")));
        label_3->setScaledContents(true);
        pushButton = new QPushButton(TRANSFERMONEY);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 270, 31, 18));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(3, 148, 105);\n"
" font: 800 5pt \"Gill Sans\";\n"
"color:black;\n"
""));
        myaccount_txt = new QLineEdit(TRANSFERMONEY);
        myaccount_txt->setObjectName("myaccount_txt");
        myaccount_txt->setGeometry(QRect(250, 70, 131, 31));
        myaccount_txt->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        reciever_txt = new QLineEdit(TRANSFERMONEY);
        reciever_txt->setObjectName("reciever_txt");
        reciever_txt->setGeometry(QRect(250, 130, 131, 31));
        reciever_txt->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        amount_txt = new QLineEdit(TRANSFERMONEY);
        amount_txt->setObjectName("amount_txt");
        amount_txt->setGeometry(QRect(250, 190, 131, 31));
        amount_txt->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        label_2->raise();
        label->raise();
        usernameneter_2->raise();
        usernameneter_3->raise();
        usernameneter_4->raise();
        label_3->raise();
        pushButton->raise();
        myaccount_txt->raise();
        reciever_txt->raise();
        amount_txt->raise();

        retranslateUi(TRANSFERMONEY);

        QMetaObject::connectSlotsByName(TRANSFERMONEY);
    } // setupUi

    void retranslateUi(QWidget *TRANSFERMONEY)
    {
        TRANSFERMONEY->setWindowTitle(QCoreApplication::translate("TRANSFERMONEY", "Form", nullptr));
        label->setText(QCoreApplication::translate("TRANSFERMONEY", "  HBL BANK", nullptr));
        label_2->setText(QString());
        usernameneter_2->setText(QCoreApplication::translate("TRANSFERMONEY", "  ENTER RECIEVER ACCOUNT NUMBER:", nullptr));
        usernameneter_3->setText(QCoreApplication::translate("TRANSFERMONEY", "  ENTER YOUR ACCOUNT NUMBER:", nullptr));
        usernameneter_4->setText(QCoreApplication::translate("TRANSFERMONEY", "  ENTER AMOUNT:", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("TRANSFERMONEY", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TRANSFERMONEY: public Ui_TRANSFERMONEY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERMONEY_H
