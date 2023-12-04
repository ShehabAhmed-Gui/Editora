#include "mainwindow.h"
#include "./ui_mainwindow.h"

baseClass::baseClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    baseClass::setWindowTitle("notebad ++ implementation");
}

baseClass::~baseClass()
{
    delete ui;
}

