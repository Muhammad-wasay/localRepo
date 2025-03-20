#include "useraccount.h"
#include "ui_useraccount.h"
#include<QPixmap>

// useraccount.cpp
#include "useraccount.h"
#include "ui_useraccount.h"

USERACCOUNT::USERACCOUNT(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::USERACCOUNT)
{
    ui->setupUi(this); // Now 'this' is a QDialog*
}

USERACCOUNT::~USERACCOUNT()
{
    delete ui;
}

void USERACCOUNT::on_pushButton_clicked()
{
    close();
}

