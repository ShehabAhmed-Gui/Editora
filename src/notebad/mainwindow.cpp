#include "mainwindow.h"
#include "./ui_mainwindow.h"


baseClass::baseClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , model(new customFileSystemModel(this))
    , recentFilesMenu(new QMenu(this))
{
    ui->setupUi(this);
    baseClass::setWindowTitle("notebad++ implementation");

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
    connect(&msysfilesmanager, &SystemFilesManager::recentFilesChanged, this, &baseClass::recentFilesChanged);


    connect(openFolderAction, &QAction::triggered, this, &baseClass::openFolder);
    connect(ui->actionExit, &QAction::triggered, this, &baseClass::close);

    settingToolBar();
    setSaveActionTex();
    settingShortCuts();
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

    recentFilesAction = new QAction;

    connect(open_fileAction, &QAction::triggered, this, &baseClass::openFile);
    connect(saveAction, &QAction::triggered, this, &baseClass::saveFile);

    connect(open_folderAction, &QAction::triggered, this, &baseClass::openFolder);

    newAction->setIcon(QPixmap(":/icons/new_file.png"));
    open_fileAction->setIcon(QIcon(":/icons/open_file.png"));
    open_folderAction->setIcon(QIcon(":/icons/open_folder.png"));
    saveAction->setIcon(QIcon(":/icons/save.png"));

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
        saveFileAction->setText("Save As \t Ctrl+S");
}

void baseClass::settingShortCuts()
{
    shortKeys = new ShortKeysManager(this);
    shortKeys->init();

    connect(shortKeys, &ShortKeysManager::exitScActivated, this, &baseClass::close);
    connect(shortKeys, &ShortKeysManager::openFileScActivated, this, &baseClass::openFile);
    connect(shortKeys, &ShortKeysManager::openFolderScActivated, this, &baseClass::openFolder);
    connect(shortKeys, &ShortKeysManager::saveFileScActivated, this, &baseClass::saveFile);
}

void baseClass::openFile()
{
    QString fileContent = msysfilesmanager.openFile();
    if(!fileContent.isEmpty())
    {
        ui->textEditor->setPlainText(fileContent);
        saveFileAction->setText(QString("Save %1 \t Ctrl+S").arg('"' + fileDetails.recentFiles.last().fileName + '"'));
    }

}

void baseClass::saveFile()
{
    msysfilesmanager.saveFile(fileDetails.recentFiles.last().filePath, ui->textEditor->toPlainText());
}

void baseClass::recentFilesChanged(const QString &fileName)
{
    recentFilesMenu->addAction(new QAction(fileName));
    recentFilesMenu->addSeparator();
    recentFilesAction->setMenu(recentFilesMenu);
    recentFilesAction->setText(fileName);
    ui->files_toolBar->addAction(recentFilesAction);

}

void baseClass::openFolder()
{
    QString rootFolder = msysfilesmanager.openFolder(this);

    if(!rootFolder.isEmpty())
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


