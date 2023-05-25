#include "dialog.h"
#include "ui_dialog.h"
#include "dipoet.h"
#include "accountstatment.h"
#include "moneytransfer.h"
#include "changepassowrd.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_money_out_clicked()
{
    withdraw withdrow_S;
    hide();
    withdrow_S.setModal(true);
    withdrow_S.showFullScreen();
    withdrow_S.exec();
}


void Dialog::on_Deposit_clicked()
{
    Dipoet Deposit;
    hide();
    Deposit.setModal(true);
    Deposit.showFullScreen();
    Deposit.exec();
}


void Dialog::on_pushButton_3_clicked()
{
    AccountStatment Account;
    hide();
    Account.setModal(true);
    Account.showFullScreen();
    Account.exec();
}


void Dialog::on_pushButton_4_clicked()
{
    MoneyTransfer Deposit;
    hide();
    Deposit.setModal(true);
    Deposit.showFullScreen();
    Deposit.exec();
}


void Dialog::on_pushButton_5_clicked()
{
    ChangePassowrd Deposit;
    hide();
    Deposit.setModal(true);
    Deposit.showFullScreen();
    Deposit.exec();
}

