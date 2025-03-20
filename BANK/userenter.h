#ifndef USERENTER_H
#define USERENTER_H

#include <QDialog>

namespace Ui {
class userENTER;
}

class userENTER : public QDialog
{
    Q_OBJECT

public:
    explicit userENTER(QWidget *parent = nullptr);
    ~userENTER();

private:
    Ui::userENTER *ui;
};

#endif // USERENTER_H
