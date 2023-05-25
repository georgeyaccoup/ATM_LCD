#include "changepassowrd.h"
#include "ui_changepassowrd.h"
#include "thankyou.h"
#include "dialog.h"
#include <QFile>
#include <QMessageBox>
#include <QString>
#include <QCoreApplication>
#include <QTimer>
ChangePassowrd::ChangePassowrd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassowrd)
{
    ui->setupUi(this);
}

ChangePassowrd::~ChangePassowrd()
{
    delete ui;
}

void ChangePassowrd::on_pushButton_clicked()
{
    Dialog NewDialoge;
    hide();
    NewDialoge.setModal(true);
    NewDialoge.showFullScreen();
    NewDialoge.exec();
}


void ChangePassowrd::on_pushButton_2_clicked()
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

void replaceNumberInFile(const QString& filePath, const QString& searchNumber, const QString& replaceNumber)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "Failed to open file for reading and writing:" << file.errorString();
        return;
    }

    QString fileContent;
    QTextStream textStream(&file);

    while (!textStream.atEnd())
    {
        QString line = textStream.readLine();
        line.replace(searchNumber, replaceNumber);
        fileContent += line + "\n";
    }

    file.resize(0);
    textStream.seek(0);
    textStream << fileContent;

    file.close();
}

void ChangePassowrd::on_pushButton_3_clicked()
{
    QString OldP = ui->OldPass->text();
    QString line_P;
    bool isFound = false;
    QFile file_P(":/new/prefix3/ATM/note/Passwords.txt");
    if (file_P.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream textStream_P(&file_P);
        while (!textStream_P.atEnd())
        {
            line_P = textStream_P.readLine();
            if (line_P.trimmed() == OldP)
            {
                isFound = true;
                break;
            }
        }
        file_P.close();

        if (isFound)
        {
            QString NewPass = ui->NewPass->text();
            //replaceNumberInFile(":/new/prefix3/ATM/note/Passwords.txt", OldP, NewPass);
        }
    }

    QString NewPass = ui->NewPass->text();
    QString NewPassCom = ui->NewPassCom->text();
    if (isFound && NewPass == NewPassCom)
    {
        replaceNumberInFile(":/new/prefix3/ATM/note/Passwords.txt", OldP, NewPass);
        QMessageBox::StandardButton reply = QMessageBox::question(nullptr, "Done", "The operation is done.\nDo you want to do more operations!?", QMessageBox::Yes | QMessageBox::No);
        QMessageBox* msgBox = qobject_cast<QMessageBox*>(QApplication::activeModalWidget());
        if (msgBox)
        {
            msgBox->setStyleSheet("QMessageBox {"
                                  "background-color: rgb(0, 0, 0);"
                                  "color: rgb(255, 255, 255);"
                                  "font: bold 12pt \"Arial\";"
                                  "border-image: url(:/path/to/image.jpg) 20 20 20 20 stretch stretch;"
                                  "}");
        }

        if (reply == QMessageBox::No)
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
        else
        {
            Dialog NewDialog;
            hide();
            NewDialog.setModal(true);
            NewDialog.showFullScreen();
            NewDialog.exec();
        }
    }
}

