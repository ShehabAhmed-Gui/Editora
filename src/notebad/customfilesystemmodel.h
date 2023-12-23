#ifndef CUSTOMFILESYSTEMMODEL_H
#define CUSTOMFILESYSTEMMODEL_H

#include <QFileSystemModel>
#include <QObject>
#include <QWidget>
#include <QFileIconProvider>
#include <QModelIndex>

class customFileSystemModel : public QFileSystemModel
{
    Q_OBJECT
public:
    explicit customFileSystemModel(QObject *parent = nullptr);

    // QAbstractItemModel interface
public:
    // QModelIndex index(int row, int column, const QModelIndex &parent) const override;
    // int rowCount(const QModelIndex &parent) const override;
    // int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    // QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    // QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
};
#endif // CUSTOMFILESYSTEMMODEL_H
