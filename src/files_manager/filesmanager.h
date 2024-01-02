#ifndef FILESMANAGER_H
#define FILESMANAGER_H

#include "filesSystemInterface.h"
#include <QObject>
namespace FILEINFO
{
struct FileProperties
{
    QString fileName;
    QString filePath;
    qint64 fileSize;
    QList<FileProperties> recentFiles;
};
     inline FileProperties fileDetails;
}
     using namespace FILEINFO;

class SystemFilesManager : public FilesSystemInterFace
{
    Q_OBJECT

public:
    explicit SystemFilesManager(QObject *parent = nullptr);

signals:
    void recentFilesChanged(const QString &fileName);

public slots:
    QByteArray openFile(const QString &filePath = "") override;
    bool saveFile(const QString &filepath, const QString &contest) override;

public:
    void iterateOverFolders(const QString &folderPath);
    void setFileProperties(QFile &file);

    static QString getFileRelativePath(){ FileProperties relativePath; return relativePath.fileName; };
    static QString getFileFullPath() { FileProperties fullPath; return fullPath.filePath; };
    static qint64 getFileSize() { FileProperties size; return size.fileSize; };
    // static QList<fileInfo> getRecentFiles() {FileProperties fm; return fm.recentFiles; };

private:

    QFileDialog mdialog;
    QString mfilePath;
    QList<FILEINFO::FileProperties> mrecentFiles;
public slots:
    QString openFolder(QWidget *parent) override;
};
#endif // FILESMANAGER_H
