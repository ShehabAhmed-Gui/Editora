#ifndef SHORTKEYSMANAGER_H
#define SHORTKEYSMANAGER_H

#include <QObject>
#include <QKeySequence>
#include <QShortcut>


class ShortKeysManager : public QObject
{
    Q_OBJECT
public:
    explicit ShortKeysManager(QObject *parent = nullptr);
public:
    void init();
    void setDisabled(bool isDisabled = false);
private:
    QShortcut *exitSc;
    QShortcut *openFileSc;
    QShortcut *openFolderSc;
    QShortcut *saveFileSc;
signals:
    bool exitScActivated();
    void openFileScActivated();
    void openFolderScActivated();
    void saveFileScActivated();
};

#endif // SHORTKEYSMANAGER_H
