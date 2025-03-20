#ifndef TRANSFERMONEY_H
#define TRANSFERMONEY_H

#include <QDialog>

namespace Ui {
class TRANSFERMONEY;
}

class TRANSFERMONEY : public QDialog {
    Q_OBJECT

public:
    explicit TRANSFERMONEY(QWidget *parent = nullptr);
    ~TRANSFERMONEY();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TRANSFERMONEY *ui;
};

#endif // TRANSFERMONEY_H
