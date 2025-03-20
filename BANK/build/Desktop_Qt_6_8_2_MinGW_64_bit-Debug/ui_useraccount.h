/********************************************************************************
** Form generated from reading UI file 'useraccount.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNT_H
#define UI_USERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_USERACCOUNT
{
public:
    QLabel *usernameneter_2;
    QLabel *accountnumber_2;
    QLabel *accountpin_2;
    QLabel *hblbanklogo;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *user_txt;
    QLineEdit *lineEdit_6;
    QLineEdit *accnumber_txt;

    void setupUi(QDialog *USERACCOUNT)
    {
        if (USERACCOUNT->objectName().isEmpty())
            USERACCOUNT->setObjectName("USERACCOUNT");
        USERACCOUNT->resize(400, 300);
        USERACCOUNT->setStyleSheet(QString::fromUtf8("background-color: rgb(7, 179, 168);"));
        usernameneter_2 = new QLabel(USERACCOUNT);
        usernameneter_2->setObjectName("usernameneter_2");
        usernameneter_2->setGeometry(QRect(20, 90, 161, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        usernameneter_2->setFont(font);
        usernameneter_2->setStyleSheet(QString::fromUtf8("\n"
"font: 700 9pt \"Segoe UI\";"));
        usernameneter_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        accountnumber_2 = new QLabel(USERACCOUNT);
        accountnumber_2->setObjectName("accountnumber_2");
        accountnumber_2->setGeometry(QRect(20, 190, 181, 31));
        accountnumber_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        accountpin_2 = new QLabel(USERACCOUNT);
        accountpin_2->setObjectName("accountpin_2");
        accountpin_2->setGeometry(QRect(20, 140, 151, 31));
        accountpin_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));
        hblbanklogo = new QLabel(USERACCOUNT);
        hblbanklogo->setObjectName("hblbanklogo");
        hblbanklogo->setGeometry(QRect(130, 10, 141, 21));
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
        pushButton = new QPushButton(USERACCOUNT);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 270, 31, 18));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(3, 148, 105);\n"
" font: 800 5pt \"Gill Sans\";\n"
"color:black;\n"
""));
        label_2 = new QLabel(USERACCOUNT);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 260, 37, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/HBL-Logo.jpg")));
        label_2->setScaledContents(true);
        label = new QLabel(USERACCOUNT);
        label->setObjectName("label");
        label->setGeometry(QRect(-4, -9, 411, 311));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Screenshot 2025-03-19 202201 (1).png")));
        label->setScaledContents(true);
        user_txt = new QLineEdit(USERACCOUNT);
        user_txt->setObjectName("user_txt");
        user_txt->setGeometry(QRect(250, 90, 131, 31));
        user_txt->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        lineEdit_6 = new QLineEdit(USERACCOUNT);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(250, 140, 131, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        accnumber_txt = new QLineEdit(USERACCOUNT);
        accnumber_txt->setObjectName("accnumber_txt");
        accnumber_txt->setGeometry(QRect(250, 190, 131, 31));
        accnumber_txt->setStyleSheet(QString::fromUtf8("background-color:rgb(7, 179, 168);\n"
"border-color: black;"));
        label->raise();
        usernameneter_2->raise();
        accountnumber_2->raise();
        accountpin_2->raise();
        hblbanklogo->raise();
        pushButton->raise();
        label_2->raise();
        user_txt->raise();
        lineEdit_6->raise();
        accnumber_txt->raise();

        retranslateUi(USERACCOUNT);

        QMetaObject::connectSlotsByName(USERACCOUNT);
    } // setupUi

    void retranslateUi(QDialog *USERACCOUNT)
    {
        USERACCOUNT->setWindowTitle(QCoreApplication::translate("USERACCOUNT", "Dialog", nullptr));
        usernameneter_2->setText(QCoreApplication::translate("USERACCOUNT", "  ENTER USER NAME:", nullptr));
        accountnumber_2->setText(QCoreApplication::translate("USERACCOUNT", "  ENTER ACCOUNT NUMBER:", nullptr));
        accountpin_2->setText(QCoreApplication::translate("USERACCOUNT", "  ENTER ACCOUNT PIN :", nullptr));
        hblbanklogo->setText(QCoreApplication::translate("USERACCOUNT", "  HBL BANK", nullptr));
        pushButton->setText(QCoreApplication::translate("USERACCOUNT", "back", nullptr));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class USERACCOUNT: public Ui_USERACCOUNT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNT_H
