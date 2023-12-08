#include "fileshandler.h"



fileshandler::fileshandler()
{
    connect(this, &fileshandler::saveFileTriggered, this, &fileshandler::saveFile);
}

fileshandler::~fileshandler()
{

}

QByteArray fileshandler::openFile()
{
    QString filePath = dialog.getOpenFileName(nullptr, "select file or more to open", "", "All Files *.*");
    if(!filePath.isEmpty())
    {
        info.fileName = filePath;
        QFile file(filePath);
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

bool fileshandler::saveFile(const QString &filepath, const QString &contest)
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
