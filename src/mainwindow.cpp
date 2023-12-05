#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "fileshandler.h"

baseClass::baseClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*initiliaze the objects*/
    baseClass::setWindowTitle("notebad ++ implementation");

    ui->actionNew->setText("New File.. \t Ctrl+N");
    ui->actionOpen->setText("Open File.. \t Ctrl+O");
    ui->actionOpen_Folder->setText("Open Folder.. \t Ctrl+F");
    ui->actionSave->setText("Save %1 \t Ctrl+S");
    ui->actionExit->setText("Exit \t Ctrl+Q OR Alt+F4");

    ui->actionCopy->setText("Copy \t Ctrl+C");
    ui->actionPaste->setText("Paste \t Ctrl+V");
    ui->actionSelect_All->setText("Select All \t Ctrl+A");

    settingToolBar();
}

baseClass::~baseClass()
{
    delete ui;
}

void baseClass::settingToolBar()
{
    newAction = new QAction;
    open_fileAction = new QAction;
    open_folderAction = new QAction;
    saveAction = new QAction;
    connect(open_fileAction, &QAction::triggered, this, &baseClass::openFile);

    newAction->setIcon(QPixmap(":/resources/new_file.png"));
    open_fileAction->setIcon(QIcon(":/resources/open_file.png"));
    open_folderAction->setIcon(QIcon(":/resources/open_folder.png"));
    saveAction->setIcon(QIcon(":/resources/save.png"));
    newAction->setIconText("Koko");
    ui->toolBar->setMovable(false);
    ui->toolBar->setIconSize(QSize(18, 18));
    ui->toolBar->setMinimumSize(QSize(0, 40));
    ui->toolBar->addAction(newAction);
    ui->toolBar->addAction(open_fileAction);
    ui->toolBar->addAction(open_folderAction);
    ui->toolBar->addAction(saveAction);

    ui->toolBar->addSeparator();
}

void baseClass::openFile()
{
    ui->textEditor->setPlainText(file.openFile());
}

