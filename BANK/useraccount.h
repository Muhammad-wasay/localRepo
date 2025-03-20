#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QWidget>

namespace Ui {
class USERACCOUNT;
}

// useraccount.h
#include <QDialog>

class USERACCOUNT : public QDialog {
    Q_OBJECT
public:
    explicit USERACCOUNT(QWidget *parent = nullptr);
    ~USERACCOUNT();
private slots:
    void on_pushButton_clicked();

private:
    Ui::USERACCOUNT *ui;
};
#endif // USERACCOUNT_H
