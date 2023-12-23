#include "customfilesystemmodel.h"

customFileSystemModel::customFileSystemModel(QObject *parent)
    : QFileSystemModel{parent}
{}

QVariant customFileSystemModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        qDebug() << "not invalid";
    if(role == Qt::ForegroundRole)
    {
        return QVariant(QColor(Qt::red));
    }
    return QFileSystemModel::data(index, role);
}

