/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *useraccount;
    QPushButton *addnewuser;
    QPushButton *exit;
    QPushButton *transfermoney;
    QStackedWidget *useraccountpage;
    QWidget *page;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *page_3;
    QWidget *page_2;
    QLabel *usernameneter;
    QLabel *accountnumber;
    QLabel *accountpin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(599, 365);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 20, 141, 21));
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
        useraccount = new QPushButton(centralwidget);
        useraccount->setObjectName("useraccount");
        useraccount->setGeometry(QRect(340, 80, 171, 41));
        useraccount->setMinimumSize(QSize(0, 18));
        useraccount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border-color: rgb(0, 0, 0);\n"
"background-color:rgb(7, 179, 168);\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}"));
        addnewuser = new QPushButton(centralwidget);
        addnewuser->setObjectName("addnewuser");
        addnewuser->setGeometry(QRect(80, 80, 201, 41));
        addnewuser->setMinimumSize(QSize(0, 21));
        addnewuser->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(390, 170, 80, 41));
        exit->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
""));
        transfermoney = new QPushButton(centralwidget);
        transfermoney->setObjectName("transfermoney");
        transfermoney->setGeometry(QRect(120, 170, 141, 41));
        transfermoney->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 14pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
"\n"
""));
        useraccountpage = new QStackedWidget(centralwidget);
        useraccountpage->setObjectName("useraccountpage");
        useraccountpage->setGeometry(QRect(10, 160, 20, 20));
        page = new QWidget();
        page->setObjectName("page");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 10, 131, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 50, 151, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 30, 131, 16));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        useraccountpage->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        useraccountpage->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        usernameneter = new QLabel(page_2);
        usernameneter->setObjectName("usernameneter");
        usernameneter->setGeometry(QRect(20, 10, 141, 20));
        usernameneter->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        accountnumber = new QLabel(page_2);
        accountnumber->setObjectName("accountnumber");
        accountnumber->setGeometry(QRect(20, 40, 171, 16));
        accountnumber->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        accountpin = new QLabel(page_2);
        accountpin->setObjectName("accountpin");
        accountpin->setGeometry(QRect(20, 60, 151, 16));
        accountpin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:rgb(7, 179, 168);\n"
"\n"
"    font-size: 35px;\n"
"    font: 800 9pt \"Gill Sans\";\n"
"    color: white;\n"
"}\n"
"\n"
""));
        useraccountpage->addWidget(page_2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 280, 37, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/HBL-Logo.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, -20, 611, 381));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/Screenshot 2025-03-19 202201 (1).png")));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 140, 37, 51));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(3, 148, 105);"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/Screenshot 2025-03-20 010106.png")));
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        useraccountpage->raise();
        label->raise();
        useraccount->raise();
        exit->raise();
        transfermoney->raise();
        label_2->raise();
        label_7->raise();
        addnewuser->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        useraccountpage->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  HBL BANK", nullptr));
        useraccount->setText(QCoreApplication::translate("MainWindow", "ENTER USER ACCOUNT ", nullptr));
        addnewuser->setText(QCoreApplication::translate("MainWindow", "ADD NEW USER ACCOUNT ", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        transfermoney->setText(QCoreApplication::translate("MainWindow", "TRANSFER MONEY", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ENTER YOUR NAME:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "CREATE YOUR ACCOUNT PIN:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ENTER YOUR EMAIL:", nullptr));
        usernameneter->setText(QCoreApplication::translate("MainWindow", "ENTER USER NAME:", nullptr));
        accountnumber->setText(QCoreApplication::translate("MainWindow", "ENTER ACCOUNT NUMBER:", nullptr));
        accountpin->setText(QCoreApplication::translate("MainWindow", "ENTER ACCOUNT PIN :", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
