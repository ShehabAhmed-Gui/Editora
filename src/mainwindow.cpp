#include "mainwindow.h"
#include "./ui_mainwindow.h"

baseClass::baseClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*initiliaze the objects*/
    new_action = new QAction;
    baseClass::setWindowTitle("notebad ++ implementation");

    ui->actionNew->setText("New File.. \t \t Ctrl+N");
    ui->actionOpen->setText("Open File.. \t \t Ctrl+O");
    ui->actionOpen_Folder->setText("Open Folder.. \t \t Ctrl+F");
    ui->actionSave->setText("Save %1 \t \t Ctrl+S");

    ui->actionCopy->setText("Copy /t /t Ctrl+C");
    ui->actionPaste->setText("Paste \t \t Ctrl+V");
    ui->actionSelect_All->setText("Select All \t \t Ctrl+A");

    settingToolBar();
}

baseClass::~baseClass()
{
    delete ui;
}

void baseClass::settingToolBar()
{

    new_action->setIcon(QPixmap(":/../resources/new_file.png"));

    ui->toolBar->setMovable(false);

    ui->toolBar->addAction(new_action);
}

