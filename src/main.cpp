#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int id = QFontDatabase::addApplicationFont(":/fonts/Playfair_Display/static/PlayfairDisplay-Medium.ttf");
    QFont defaultFont(QFontDatabase::applicationFontFamilies(id), 10, QFont::Medium);
    QApplication::setFont(defaultFont);
    baseClass w;

    w.show();
    return a.exec();
}
