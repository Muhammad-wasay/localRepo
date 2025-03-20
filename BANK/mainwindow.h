#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "useraccount.h"
#include "addnewuser.h"
#include "transfermoney.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_useraccount_clicked();
    void on_addnewuser_clicked();
    void on_transfermoney_clicked();
    void on_exit_clicked();
    void ouvrire();
    void Ouvrire();
    void OUVRIRE();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
