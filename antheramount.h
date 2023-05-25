#ifndef ANTHERAMOUNT_H
#define ANTHERAMOUNT_H

#include <QDialog>

namespace Ui {
class AntherAmount;
}

class AntherAmount : public QDialog
{
    Q_OBJECT

public:
    explicit AntherAmount(QWidget *parent = nullptr);
    ~AntherAmount();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AntherAmount *ui;
};

#endif // ANTHERAMOUNT_H
