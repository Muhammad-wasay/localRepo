#include "transfermoney.h"
#include "ui_transfermoney.h"
#include <QPixmap>

TRANSFERMONEY::TRANSFERMONEY(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TRANSFERMONEY)
{
    ui->setupUi(this); // Now 'this' is a QDialog*
}

TRANSFERMONEY::~TRANSFERMONEY()
{
    delete ui;
}

void TRANSFERMONEY::on_pushButton_clicked()
{
    close();
}
