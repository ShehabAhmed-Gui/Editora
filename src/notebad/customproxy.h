#ifndef CUSTOMPROXY_H
#define CUSTOMPROXY_H

#include <QObject>
#include <QSortFilterProxyModel>

class CustomProxy : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    CustomProxy();

public:
    void setRootPath(QString rootFolderPath);
    QString rootPath() const;

protected:
    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const;
    bool isChildIndexOf(const QModelIndex & child, const QModelIndex & parent) const;

private:
    QString mRootPath;
};


#endif // CUSTOMPROXY_H
