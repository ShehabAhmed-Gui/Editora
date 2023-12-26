#include "customfilesystemmodel.h"

customFileSystemModel::customFileSystemModel(QObject *parent)
    : QFileSystemModel{parent}{}

QVariant customFileSystemModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    if(role == Qt::ForegroundRole)
    {
        return QVariant(QColor(QLatin1String("#E5F4E3")));
    }
    return QFileSystemModel::data(index, role);
}

