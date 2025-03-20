#ifndef ADDNEWUSER_H
#define ADDNEWUSER_H

#include <QWidget>

namespace Ui {
class ADDNEWUSER;
}

// useraccount.h
#include <QDialog>

class ADDNEWUSER : public QDialog {
    Q_OBJECT
public:
    explicit ADDNEWUSER(QWidget *parent = nullptr);
    ~ADDNEWUSER();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ADDNEWUSER *ui;
};
#endif // ADDNEWUSER_H
