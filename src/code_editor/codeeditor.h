#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QPlainTextEdit>
#include <QObject>

class codeEditor : public QPlainTextEdit
{
    Q_OBJECT
public:
    codeEditor();
};

#endif // CODEEDITOR_H
