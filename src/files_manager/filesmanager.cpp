#include "filesmanager.h"
using namespace filesInterFace;

FilesManager::FilesManager(QObject *parent)
    : FilesSystemInterFace(parent){}
FilesSystemInterFace::~FilesSystemInterFace(){}

QByteArray FilesManager::openFile()
{
    QString filePath = dialog.getOpenFileName(nullptr, "select file or more to open", "", "All Files *.*");
    if(!filePath.isEmpty())
    {
        QFile file(filePath);
        info.fileName = file.fileName();
        info.filePath = filePath;
        info.fileSize = file.size();
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while(!file.atEnd())
                return file.readAll();
            file.close();
        }
        else qDebug("faileed");
    }
    return QByteArray();
}

bool FilesManager::saveFile(const QString &filepath, const QString &contest)
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
