#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>
#include<qmessageBox>
// #include<QPixmap>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QPixmap heaven(":/images/HBL-Logo.jpg");
    // ui->label->setPixmap(heaven);
  connect(ui->useraccount, &QPushButton::clicked, this, &MainWindow::ouvrire);
    connect(ui->addnewuser, &QPushButton::clicked, this, &MainWindow::Ouvrire);
   connect(ui->transfermoney, &QPushButton::clicked, this, &MainWindow::OUVRIRE);
    // **Background color change**
    this->setStyleSheet("background-color: rgb(7, 179, 168);");

    ui->usernameneter->setStyleSheet("QPushButton { background-color: rgb(7, 179, 168); color: white; border: 2px solid white; font-size: 9pt; font-weight: bold; font: 800 9pt Gill Sans; }");
    ui->usernameneter->setStyleSheet("QPushButton { background-color: rgb(7, 179, 168); color: white; border: 2px solid white; font-size: 9pt; font-weight: bold; font: 800 9pt Gill Sans; }");
    ui->usernameneter->setStyleSheet("QPushButton { background-color: rgb(7, 179, 168); color: white; border: 2px solid white; font-size: 9pt; font-weight: bold; font: 800 9pt Gill Sans; }");
    ui->usernameneter->setStyleSheet("QPushButton { background-color: rgb(7, 179, 168); color: white; border: 2px solid white; font-size: 9pt; font-weight: bold; font: 800 9pt Gill Sans; }");

    // **Ensure stackedWidget is set up correctly**
    if (!ui->useraccountpage) {
        qDebug() << "Error: stackedWidget not found!";
    } else {
        qDebug() << "stackedWidget is ready!";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::ouvrire(){
    USERACCOUNT *op = new USERACCOUNT();
    op->show();
}
void MainWindow::Ouvrire(){
    ADDNEWUSER *op = new ADDNEWUSER();
    op->show();
}

void MainWindow::OUVRIRE(){
    TRANSFERMONEY *op = new TRANSFERMONEY();
    op->show();
}
// **Button Click Functions**
void MainWindow::on_addnewuser_clicked()
{
    if (ui->useraccountpage) {
        ui->useraccountpage->setCurrentWidget(ui->page);
        qDebug() << "Switched to NEW Account Page!";
    } else {
        qDebug() << "Error: useraccountpage (stacked widget) not found!";
    } // Page 2
}
void MainWindow::on_useraccount_clicked()
{
    if (ui->useraccountpage) {
        ui->useraccountpage->setCurrentWidget(ui->page_2);
        qDebug() << "Switched to User Account Page!";
    } else {
        qDebug() << "Error: useraccountpage (stacked widget) not found!";
    }
}
void MainWindow::on_transfermoney_clicked()
{
    if (ui->useraccountpage)
        ui->useraccountpage->setCurrentIndex(3);  // Page 3
}
void MainWindow::on_exit_clicked()
{
    close(); // Window close
}

