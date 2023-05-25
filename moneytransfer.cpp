#include "moneytransfer.h"
#include "ui_moneytransfer.h"
#include "thankyou.h"
#include <QTimer>

#include "dialog.h"
#include <QMessageBox>
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include <QFile>
MoneyTransfer::MoneyTransfer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoneyTransfer)
{
    ui->setupUi(this);
}

MoneyTransfer::~MoneyTransfer()
{
    delete ui;
}

void MoneyTransfer::on_pushButton_clicked()
{
    Dialog NewDialoge;
    hide();
    NewDialoge.setModal(true);
    NewDialoge.showFullScreen();
    NewDialoge.exec();
}

void MoneyTransfer::on_pushButton_2_clicked()
{
    qDebug() << "Exiting application...";
    QCoreApplication::exit(0);
}





void MoneyTransfer::on_pushButton_3_clicked()
{
    QString Account = ui->AccountNum->text();
    QString Amount = ui->Amount->text();
    int integerValue = Amount.toInt();
    QString line_;
    bool IsFound_A = false;
    QFile file_A(":/new/prefix3/ATM/note/Accounts.txt");
    if (file_A.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream textStream(&file_A);
        while (!textStream.atEnd())
        {
            line_ = textStream.readLine();
            if (line_.contains(Account))
            {
                IsFound_A = true;
                break;
            }
        }
        file_A.close();
    }
    if (IsFound_A)
    {
        if (integerValue >= 50 && integerValue <= 10000) {
            QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "The operation is done.\nDo you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
            QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
            if (msgBox) {
                msgBox->setStyleSheet("QMessageBox {"
                                      "background-color: rgb(0, 0, 0);"
                                      "color: rgb(255, 255, 255);"
                                      "font: bold 12pt \"Arial\";"
                                      "border-image: url(:/path/to/image.jpg) 20 20 20 20 stretch stretch;"
                                      "}");
            }
            if (reply == QMessageBox::No) {
                qDebug() << "Exiting application...";
                thankYou NewDialog;
                hide();
                NewDialog.setModal(true);
                NewDialog.showFullScreen();
                NewDialog.exec();
                QTimer timer;


                timer.setSingleShot(true);
                timer.start(8000); // 8000 milliseconds = 8 seconds

                QObject::connect(&timer, &QTimer::timeout, &NewDialog, &QCoreApplication::quit);

                QCoreApplication::exit(0);
            } else {
                Dialog NewDialog;
                hide();
                NewDialog.setModal(true);
                NewDialog.showFullScreen();
                NewDialog.exec();
            }
        } else {
            QMessageBox::warning(nullptr, "Something went wrong....!", "Please make sure of the amount.");
            QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
            if (msgBox) {
                msgBox->setStyleSheet("QMessageBox {"
                                      "background-color: rgb(0, 0, 0);"
                                      "color: rgb(255, 255, 255);"
                                      "font: 11pt \"Segoe UI\";"
                                      "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                                      "}");
            }
        }
    }
    else
    {
        QMessageBox::warning(nullptr, "Something went wrong....!", "Please make sure of account number.");
        QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
        if (msgBox)
        {
            msgBox->setStyleSheet("QMessageBox {"
                                  "background-color: rgb(0, 0, 0);"
                                  "color: rgb(255, 255, 255);"
                                  "font: 11pt \"Segoe UI\";"
                                  "}");
        }
    }
}

