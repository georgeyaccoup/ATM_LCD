#include "accountstatment.h"
#include "ui_accountstatment.h"
#include "thankyou.h"
#include <QTimer>

#include "dialog.h"
#include <QFile>
#include <QMainWindow>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <QPlainTextEdit>
AccountStatment::AccountStatment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccountStatment)
{
    ui->setupUi(this);
}

AccountStatment::~AccountStatment()
{
    delete ui;
}


void AccountStatment::on_pushButton_6_clicked()
{
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
}


void AccountStatment::on_LastWeek_clicked()
{
    QFile file(":/new/prefix3/ATM/note/Last Week.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString fileContent = file.readAll();
        AccountStatment::ui->view->setPlainText(fileContent);
        file.close();
    }
    else
    {
        qDebug() << "Failed to open file:" << file.fileName();
    }

}


void AccountStatment::on_LastMonth_clicked()
{
    QFile file(":/new/prefix3/ATM/note/last Month.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString fileContent = file.readAll();
        AccountStatment::ui->view->setPlainText(fileContent);
        file.close();
    }
    else
    {
        qDebug() << "Failed to open file:" << file.fileName();
    }

}


void AccountStatment::on_LastYear_clicked()
{
    QFile file(":/new/prefix3/ATM/note/last Year.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString fileContent = file.readAll();
        AccountStatment::ui->view->setPlainText(fileContent);
        file.close();
    }
    else
    {
        qDebug() << "Failed to open file:" << file.fileName();
    }
}


void AccountStatment::on_AntherOperation_clicked()
{
    Dialog NewDialoge;
    hide();
    NewDialoge.setModal(true);
    NewDialoge.showFullScreen();
    NewDialoge.exec();
}


void AccountStatment::on_Help_clicked()
{
    QFile file(":/new/prefix3/ATM/note/Help.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString fileContent = file.readAll();
        AccountStatment::ui->Help_2->setPlainText(fileContent);
        file.close();
    }
    else
    {
        qDebug() << "Failed to open file:" << file.fileName();
    }
}

