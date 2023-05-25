#include "thankyou.h"
#include "ui_thankyou.h"

thankYou::thankYou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thankYou)
{
    ui->setupUi(this);
}

thankYou::~thankYou()
{
    delete ui;
}
