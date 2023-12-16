#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QToolButton>
#include "filesmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
using namespace filesInterFace;
class baseClass : public QMainWindow
{
    Q_OBJECT

public:
    baseClass(QWidget *parent = nullptr);
    ~baseClass();

private:
    Ui::MainWindow *ui;
public:
    void settingToolBar();
private:
    QAction *newAction;
    QAction *open_fileAction;
    QAction *open_folderAction;
    QAction *saveAction;
    QStringList recentFiles;

    FilesManager mfileSystem;
private slots:
    void openFile();
    void saveFile();
};
#endif // MAINWINDOW_H
