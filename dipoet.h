#ifndef DIPOET_H
#define DIPOET_H

#include <QDialog>

namespace Ui {
class Dipoet;
}

class Dipoet : public QDialog
{
    Q_OBJECT

public:
    explicit Dipoet(QWidget *parent = nullptr);
    ~Dipoet();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dipoet *ui;
};

#endif // DIPOET_H
