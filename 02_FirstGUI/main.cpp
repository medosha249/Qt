#include "first_gui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstGui w;

    w.show();
    return a.exec();
}
