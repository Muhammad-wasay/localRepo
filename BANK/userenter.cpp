#include "userenter.h"
#include "ui_userenter.h"

userENTER::userENTER(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userENTER)
{
    ui->setupUi(this);
}

userENTER::~userENTER()
{
    delete ui;
}
