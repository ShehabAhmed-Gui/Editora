#ifndef FILESSTEMINTERFACE_H
#define FILESSTEMINTERFACE_H

#include <QObject>
#include <QIODevice>
#include <QTextStream>
#include <QFile>
#include <QFileDialog>
#include <QList>
#include <QStack>

class FilesSystemInterFace : public QObject
{
    Q_OBJECT
public:
    explicit FilesSystemInterFace(QObject *parent = nullptr);
    virtual ~FilesSystemInterFace() = 0;
protected slots:
    virtual QByteArray openFile(const QString &filePath = "") = 0;
    virtual bool saveFile(const QString &filepath, const QString &contest) = 0;
    virtual QString openFolder(QWidget *parent) = 0;
};

#endif // FILESSTEMINTERFACE_H
