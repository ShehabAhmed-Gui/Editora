#include "customproxy.h"
#include <QFileSystemModel>

CustomProxy::CustomProxy(){}

void CustomProxy::setRootPath(QString rootFolderPath)
{
    mRootPath = rootFolderPath;
}

QString CustomProxy::rootPath() const
{
    return mRootPath;
}

bool CustomProxy::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
    QFileSystemModel* model = qobject_cast<QFileSystemModel*>( sourceModel() );
    QModelIndex index = model->index(source_row, 0, source_parent);
    QModelIndex rootIndex = model->index(this->rootPath());   // create some getter/setter methods for the "rootPath" (QString)
    Q_ASSERT( rootIndex.isValid() );
    if( !rootIndex.isValid() )
        return false;
    else
    {
        return (index.isValid() && index == rootIndex);
        qDebug() << "true";
    }
}

bool CustomProxy::isChildIndexOf(const QModelIndex &child, const QModelIndex &parent) const
{
    if( !child.isValid() )
        return false;

    QModelIndex idx = parent;
    do {
        if( child.parent() == idx )
            return true;
        idx = idx.parent();
        if( child.parent() == idx )  // in case parent is already invalid we need to check here again
            return true;
    }
    while( idx.isValid() );
    return false;
}
