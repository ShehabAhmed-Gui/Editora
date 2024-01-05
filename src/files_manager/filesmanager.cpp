#include "filesmanager.h"
#include <QDirIterator>
SystemFilesManager::SystemFilesManager(QObject *parent)
    : FilesSystemInterFace(parent)
    , mfilePath("")
{}

FilesSystemInterFace::~FilesSystemInterFace(){}

QByteArray SystemFilesManager::openFile(const QString &filePath)
{
    if(!filePath.isEmpty())
    {
        QFile file(filePath);
        setFileProperties(file);

        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
             emit recentFilesChanged(fileDetails.fileName);

            while(!file.atEnd())
                return file.readAll();

            file.close();
        }
        return QByteArray();
    }

    else if(filePath.isEmpty())
    {
        mfilePath = mdialog.getOpenFileName(nullptr, "select file or more to open", "", "All Files *.*");
        QFile file(mfilePath);
        setFileProperties(file);

        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            emit recentFilesChanged(fileDetails.fileName);

            while(!file.atEnd())
                return file.readAll();

            file.close();
        }
    }
    return QByteArray();
}

bool SystemFilesManager::saveFile(const QString &filepath, const QString &contest)
{
    QFile file_(filepath);
    if(file_.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        file_.resize(0);
        QTextStream in(&file_);
        in << contest;

        return true;
        file_.close();
    }
    qDebug() << file_.errorString();
    return false;
}

void SystemFilesManager::setFileProperties(QFile &file)
{
    QFileInfo fileProp(file);

    fileDetails.fileName = fileProp.fileName();
    fileDetails.fileSize = fileProp.size();
    fileDetails.filePath = fileProp.absoluteFilePath();

    fileDetails.recentFiles.append(fileDetails);
}

QString SystemFilesManager::openFolder(QWidget *parent = nullptr)
{
    QString isSelected = mdialog.getExistingDirectory(parent, "open Directory", "/home", QFileDialog::ShowDirsOnly
                                                                                            | QFileDialog::DontResolveSymlinks);
    // QList<QString> folderStructure;
    if(!isSelected.isEmpty())
    {
        return isSelected;
        qDebug() << isSelected;
        // QFileInfo fi (isSelected);
        // auto list = QDir (fi.absoluteFilePath()).entryInfoList(QDir::Filter::NoDotAndDotDot | QDir::AllEntries);
        // for(const QFileInfo &info : list)
        // {
        //     folderStructure.append(info.absoluteFilePath());
        // }
        // return folderStructure;
    }
    return QString();
    // return QList<QString>();
    // iterateOverFolders(isSelected);
}
