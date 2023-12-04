#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QToolButton>

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
public:
    void settingToolBar();
private:
    QAction *new_action;
    QAction *open_folder_action;
    QAction *save_action;

};
#endif // MAINWINDOW_H
