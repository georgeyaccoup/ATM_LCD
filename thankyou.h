#ifndef THANKYOU_H
#define THANKYOU_H

#include <QDialog>

namespace Ui {
class thankYou;
}

class thankYou : public QDialog
{
    Q_OBJECT

public:
    explicit thankYou(QWidget *parent = nullptr);
    ~thankYou();

private:
    Ui::thankYou *ui;
};

#endif // THANKYOU_H
