#ifndef FILESYSTEMINTERFACE_H
#define FILESYSTEMINTERFACE_H

#include <QObject>
#include <QIODevice>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>

class FilesSystemInterFace : public QObject
{
    Q_OBJECT
public:
    explicit FilesSystemInterFace(QObject *parent = nullptr);
    virtual ~FilesSystemInterFace() = 0;
protected slots:
    virtual QByteArray openFile() = 0;
    virtual bool saveFile(const QString &filepath, const QString &contest) = 0;
};

#endif // FILESYSTEMINTERFACE_H
