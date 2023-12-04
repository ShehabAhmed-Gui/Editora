#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    baseClass w;
    w.show();
    return a.exec();
}
