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
    struct fileInfo
    {
        QString fileName;
    };
    fileInfo info;
signals:
    void saveFileTriggered(QString &file, const QString &contest);
public slots:
    bool saveFile(const QString &filepath, const QString &contest);
private:
    QFileDialog dialog;
};

#endif // FILESHANDLER_H
