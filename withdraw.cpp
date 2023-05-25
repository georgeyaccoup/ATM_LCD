#include "withdraw.h"
#include "dialog.h"
#include "ui_withdraw.h"
#include "antheramount.h"
#include <QMessageBox>
#include "thankyou.h"
#include <QTimer>
withdraw::withdraw(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::withdraw)
{
    ui->setupUi(this);
}

withdraw::~withdraw()
{
    delete ui;
}

void withdraw::on_Anther_clicked()
{
    AntherAmount goToAnther;
    hide();
    goToAnther.setModal(true);
    goToAnther.showFullScreen();
    goToAnther.exec();
}


void withdraw::on__50__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__100__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__200__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__300__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__500__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__700__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}


void withdraw::on__1000__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
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


void withdraw::on__2000__clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "Do you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
    QMessageBox *msgBox = qobject_cast<QMessageBox *>(QApplication::activeModalWidget());
    if (msgBox) {
        msgBox->setStyleSheet("QMessageBox {"
                              "background-color: rgb(0, 0, 0);"
                              "color: rgb(255, 255, 255);"
                              "font: 11pt \"Segoe UI\";"
                              "border-image: url(:/1/ATM/Black Screen 10 seconds.mp4);"
                              "}");
    }
    if (reply ==QMessageBox::No){
        qDebug() << "Exiting application...";
        QCoreApplication::exit(0);
    } else{
        Dialog NewDialoge;
        hide();
        NewDialoge.setModal(true);
        NewDialoge.showFullScreen();
        NewDialoge.exec();
    }
}

