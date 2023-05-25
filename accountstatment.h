#ifndef ACCOUNTSTATMENT_H
#define ACCOUNTSTATMENT_H

#include <QDialog>

namespace Ui {
class AccountStatment;
}

class AccountStatment : public QDialog
{
    Q_OBJECT

public:
    explicit AccountStatment(QWidget *parent = nullptr);
    ~AccountStatment();

private slots:
    void on_textEdit_copyAvailable(bool b);

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_LastWeek_clicked();

    void on_LastMonth_clicked();

    void on_LastYear_clicked();

    void on_AntherOperation_clicked();

    void on_Help_clicked();

private:
    Ui::AccountStatment *ui;
};

#endif // ACCOUNTSTATMENT_H
