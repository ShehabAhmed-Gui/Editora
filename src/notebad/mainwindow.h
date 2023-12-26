#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QFontDatabase>
#include <QFont>
#include <QToolButton>
#include <QFileSystemModel>

#include "customfilesystemmodel.h"
#include "filesmanager.h"
// #include "folderstructure.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class baseClass : public QMainWindow
{
    Q_OBJECT

public:
    baseClass(QWidget *parent = nullptr);
    ~baseClass();

private:
    Ui::MainWindow *ui;
private:
    void settingToolBar();
    void setSaveActionTex();
private:
    QAction *newAction;
    QAction *open_fileAction;
    QAction *open_folderAction;
    QAction *saveAction;

    //File_actions
    QAction *openFileAction;
    QAction *saveFileAction;
    QAction *openFolderAction;
    QStringList recentFiles;

    SystemFilesManager msysfilesmanager;
    customFileSystemModel *model;
    // FolderStructure folderModel;
private slots:
    void openFile();
    void saveFile();

    void openFolder();
    void itemDoubleClicked(const QModelIndex &index);
};
#endif // MAINWINDOW_H
