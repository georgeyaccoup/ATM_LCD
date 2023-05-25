
#ifndef INTRO_PAGE_H
#define INTRO_PAGE_H
#include "dialog.h"
#include <Qstring.h>
#include <QMainWindow>
#include <fstream>
#include <QFile>
#include <QDialog>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui { class intro_page; }
QT_END_NAMESPACE

class intro_page : public QMainWindow

{
    Q_OBJECT

public:
    intro_page(QWidget *parent = nullptr);
    ~intro_page();

private slots:
    void on_pushButton_clicked();

private:
    Ui::intro_page *ui;
};

#endif // INTRO_PAGE_H
