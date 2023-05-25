#include "antheramount.h"
#include "ui_antheramount.h"
#include "thankyou.h"
#include <QTimer>

#include "dialog.h"
#include <QMessageBox>
#include <QDebug>
#include <QCoreApplication>
AntherAmount::AntherAmount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AntherAmount)
{
    ui->setupUi(this);
}

AntherAmount::~AntherAmount()
{
    delete ui;
}

void AntherAmount::on_pushButton_3_clicked()
{
    QString amount = ui->Amount->text();
    int integerValue = amount.toInt();
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


void AntherAmount::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Are you sure!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::Yes){
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

    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void AntherAmount::on_pushButton_clicked()
{
    Dialog NewDialoge;
    hide();
    NewDialoge.setModal(true);
    NewDialoge.showFullScreen();
    NewDialoge.exec();
}

