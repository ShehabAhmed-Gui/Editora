#ifndef FILESHANDLER_H
#define FILESHANDLER_H

#include <QObject>
#include <QIODevice>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>

class fileshandler : public QObject
{
    Q_OBJECT
public:
    fileshandler();
    ~fileshandler();
public:
    QByteArray openFile();
private:
    QFileDialog dialog;
};

#endif // FILESHANDLER_H
