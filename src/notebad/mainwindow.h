#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QFontDatabase>
#include <QFont>
#include <QToolButton>
#include <QFileSystemModel>
#include <QLabel>

#include "customfilesystemmodel.h"
#include "filesmanager.h"

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

    /*2nd tool bar actions*/
    QAction *recentFilesAction;
    QMenu *recentFilesMenu;

    QStringList recentFiles;

    SystemFilesManager msysfilesmanager;
    customFileSystemModel *model;
    // FolderStructure folderModel;
private slots:
    void openFile();
    void saveFile();

    void recentFilesChanged(const QString &fileName);

    void openFolder();
    void itemDoubleClicked(const QModelIndex &index);
};
#endif // MAINWINDOW_H
