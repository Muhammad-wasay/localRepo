#include "addnewuser.h"
#include "ui_addnewuser.h"
#include<QPixmap>
#include <QMessageBox>

// useraccount.cpp
#include "addnewuser.h"
#include "ui_addnewuser.h"

ADDNEWUSER::ADDNEWUSER(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ADDNEWUSER)
{
    ui->setupUi(this); // Now 'this' is a QDialog*
}

ADDNEWUSER::~ADDNEWUSER()
{
    delete ui;
}

void ADDNEWUSER::on_pushButton_clicked()
{
    close();
}

void ADDNEWUSER::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Account Created successfully","your name : \nyour email : \nyour Account Number : \nAccount Pin: \nAccount Type : ");
}

