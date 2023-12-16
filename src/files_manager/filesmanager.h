#ifndef FILESMANAGER_H
#define FILESMANAGER_H

#include "filesysteminterface.h"
#include <QObject>

namespace filesInterFace
{
    class FilesManager : public FilesSystemInterFace
    {
        Q_OBJECT
    public:
        explicit FilesManager(QObject *parent = nullptr);

    public slots:
        QByteArray openFile() override;
        bool saveFile(const QString &filepath, const QString &contest) override;

    public:
        struct fileInfo
        {
            QString fileName;
            QString filePath;
            qint64 fileSize;
        };
        fileInfo info;

        static QString getFileRelativePath(){ fileInfo relativePath; return relativePath.fileName; };
        static QString getFileFullPath() { fileInfo fullPath; return fullPath.filePath; };
        static qint64 getFileSize() { fileInfo size; return size.fileSize; };

    private:
        QFileDialog dialog;
};
}
#endif // FILESMANAGER_H
