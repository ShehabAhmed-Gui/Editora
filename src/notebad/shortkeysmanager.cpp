#include "shortkeysmanager.h"

ShortKeysManager::ShortKeysManager(QObject *parent)
    : QObject{parent}
{
    exitSc = new QShortcut(QKeySequence("Ctrl+Q"), parent);
    openFileSc = new QShortcut(QKeySequence("Ctrl+O"), parent);
    openFolderSc = new QShortcut(QKeySequence("Ctrl+F"), parent);
    saveFileSc = new QShortcut(QKeySequence("Ctrl+S"), parent);
}

void ShortKeysManager::init()
{
    connect(exitSc, &QShortcut::activated, this, &ShortKeysManager::exitScActivated);
    connect(openFileSc, &QShortcut::activated, this, &ShortKeysManager::openFileScActivated);
    connect(openFolderSc, &QShortcut::activated, this, &ShortKeysManager::openFolderScActivated);
    connect(saveFileSc, &QShortcut::activated, this, &ShortKeysManager::saveFileScActivated);
}

void ShortKeysManager::setDisabled(bool isDisabled)
{
    if(isDisabled)
    {
        disconnect(exitSc, &QShortcut::activated, this, &ShortKeysManager::exitScActivated);
        disconnect(openFileSc, &QShortcut::activated, this, &ShortKeysManager::openFileScActivated);
        disconnect(openFolderSc, &QShortcut::activated, this, &ShortKeysManager::openFolderScActivated);
        disconnect(saveFileSc, &QShortcut::activated, this, &ShortKeysManager::saveFileScActivated);
    }
}
