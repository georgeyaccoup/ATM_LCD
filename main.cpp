
#include "intro_page.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    intro_page w;
    w.show();
    w.showFullScreen();
    return a.exec();
}
