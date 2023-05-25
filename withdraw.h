#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>

namespace Ui {
class withdraw;
}

class withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit withdraw(QWidget *parent = nullptr);
    ~withdraw();

private slots:
    void on_Anther_clicked();

    void on__50__clicked();

    void on__100__clicked();

    void on__200__clicked();

    void on__300__clicked();

    void on__500__clicked();

    void on__700__clicked();

    void on__1000__clicked();

    void on__2000__clicked();

private:
    Ui::withdraw *ui;
};

#endif // WITHDRAW_H
