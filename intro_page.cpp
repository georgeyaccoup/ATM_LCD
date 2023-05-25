
#include "intro_page.h"
#include "ui_intro_page.h"
#include <fstream>
#include <QMessageBox>


intro_page::intro_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::intro_page)
{
    ui->setupUi(this);
}

intro_page::~intro_page()
{
    delete ui;
}


void intro_page::on_pushButton_clicked()
{
    QString Account = ui->Account->text();
    QString Password = ui->Password->text();
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
                break; // Exit the loop since account is found
            }
        }
        file_A.close();
    }

    bool IsFound_P = false;
    QFile file_P(":/new/prefix3/ATM/note/Passwords.txt");
    if (IsFound_A && file_P.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream textStream(&file_P);
        while (!textStream.atEnd())
        {
            QString line = textStream.readLine();
            if (line == Password)
            {
                IsFound_P = true;
                break; // Exit the loop since password is found
            }
        }
        file_P.close();
    }

    if (IsFound_A && IsFound_P)
    {
        Dialog NewDialog;
        hide();
        NewDialog.setModal(true);
        NewDialog.showFullScreen();
        NewDialog.exec();
    }
    else
    {
        QMessageBox::warning(nullptr, "Something went wrong....!", "Please make sure of Password and account number.");
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

