#ifndef MONEYTRANSFER_H
#define MONEYTRANSFER_H

#include <QDialog>

namespace Ui {
class MoneyTransfer;
}

class MoneyTransfer : public QDialog
{
    Q_OBJECT

public:
    explicit MoneyTransfer(QWidget *parent = nullptr);
    ~MoneyTransfer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MoneyTransfer *ui;
};

#endif // MONEYTRANSFER_H
