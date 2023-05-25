#ifndef CHANGEPASSOWRD_H
#define CHANGEPASSOWRD_H

#include <QDialog>

namespace Ui {
class ChangePassowrd;
}

class ChangePassowrd : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassowrd(QWidget *parent = nullptr);
    ~ChangePassowrd();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ChangePassowrd *ui;
};

#endif // CHANGEPASSOWRD_H
