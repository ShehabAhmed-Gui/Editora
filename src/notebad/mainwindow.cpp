#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "filesmanager.h"
#include "customfilesystemmodel.h"

baseClass::baseClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    baseClass::setWindowTitle("notebad ++ implementation");

    /*initiliaze the objects*/
    openFileAction = ui->actionOpen;
    saveFileAction = ui->actionSave;

    openFolderAction = ui->actionOpen_Folder;

    ui->actionNew->setText("New File.. \t Ctrl+N");
    ui->actionOpen->setText("Open File.. \t Ctrl+O");
    ui->actionOpen_Folder->setText("Open Folder.. \t Ctrl+F");
    ui->actionSave->setText("Save %1 \t Ctrl+S");
    ui->actionExit->setText("Exit \t Ctrl+Q OR Alt+F4");

    ui->actionCopy->setText("Copy \t Ctrl+C");
    ui->actionPaste->setText("Paste \t Ctrl+V");
    ui->actionSelect_All->setText("Select All \t Ctrl+A");

    connect(openFileAction, &QAction::triggered, this, &baseClass::openFile);
    connect(saveFileAction, &QAction::triggered, this, &baseClass::saveFile);

    connect(openFolderAction, &QAction::triggered, this, &baseClass::openFolder);
    connect(ui->actionExit, &QAction::triggered, this, &baseClass::close);

    settingToolBar();
    setSaveActionTex();
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
    connect(saveAction, &QAction::triggered, this, &baseClass::saveFile);

    connect(open_folderAction, &QAction::triggered, this, &baseClass::openFolder);

    newAction->setIcon(QPixmap(":/new_file.png"));
    open_fileAction->setIcon(QIcon(":/open_file.png"));
    open_folderAction->setIcon(QIcon(":/open_folder.png"));
    saveAction->setIcon(QIcon(":/save.png"));

    ui->toolBar->setMovable(false);
    ui->toolBar->setIconSize(QSize(18, 18));
    ui->toolBar->setMinimumSize(QSize(0, 40));
    ui->toolBar->addAction(newAction);
    ui->toolBar->addAction(open_fileAction);
    ui->toolBar->addAction(open_folderAction);
    ui->toolBar->addAction(saveAction);

    ui->toolBar->addSeparator();
}

void baseClass::setSaveActionTex()
{
    if(fileDetails.recentFiles.size() <= 0)
        saveFileAction->setText("save As \t Ctrl+S");
}

void baseClass::openFile()
{
    ui->textEditor->setPlainText(msysfilesmanager.openFile());
    saveFileAction->setText(QString("Save %1 \t Ctrl+S").arg('"' + fileDetails.recentFiles.last().fileName + '"'));
}

void baseClass::saveFile()
{
    msysfilesmanager.saveFile(fileDetails.recentFiles.last().filePath, ui->textEditor->toPlainText());
}

void baseClass::openFolder()
{
    model = new customFileSystemModel(this);
    QString rootFolder = msysfilesmanager.openFolder(this);

    // QDir dir (rootFolder);

    // proxy = new CustomProxy();
    // proxy->setRootPath(rootFolder);
    // proxy->setSourceModel(model);

    model->setRootPath(rootFolder);

    ui->treeView->setModel(model);
    ui->treeView->setRootIndex(model->index(rootFolder));

    ui->treeView->header()->hideSection(1);
    ui->treeView->header()->hideSection(2);
    ui->treeView->header()->hideSection(3);
    ui->treeView->header()->hide();

    connect(ui->treeView, &QAbstractItemView::doubleClicked, this, &baseClass::itemDoubleClicked);
}

void baseClass::itemDoubleClicked(const QModelIndex &index)
{
    QFileInfo fi = QFileInfo(model->fileInfo(index));
    ui->textEditor->setPlainText(msysfilesmanager.openFile(fi.absoluteFilePath()));
    saveFileAction->setText(QString("Save %1 \t Ctrl+S").arg(fileDetails.recentFiles.last().fileName));
}


