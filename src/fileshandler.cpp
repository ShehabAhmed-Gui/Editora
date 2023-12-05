#include "fileshandler.h"



fileshandler::fileshandler()
{
}

fileshandler::~fileshandler()
{

}

QByteArray fileshandler::openFile()
{
    QString filePath = dialog.getOpenFileName(nullptr, "select file or more to open", "", "All Files *.*");
    if(!filePath.isEmpty())
    {
        QFile file(filePath);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while(!file.atEnd())
                return file.readAll();
        }
    }
    return QByteArray();
}
