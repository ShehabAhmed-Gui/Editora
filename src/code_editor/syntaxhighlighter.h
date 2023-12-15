#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H

#include <QObject>
#include <QRegularExpression>
#include <QSyntaxHighlighter>
#include <QTextCharFormat>

class SyntaxHighLighter : public QSyntaxHighlighter
{
    Q_OBJECT
public:
    explicit SyntaxHighLighter(QTextDocument *parent = nullptr);

protected:
    void highlightBlock(const QString &text) override;

private:
    struct HighLightRule
    {
        QRegularExpression pattern;
        QTextCharFormat format;
    };
    QList<HighLightRule> highlightingRules;

    QTextCharFormat keywordFormat;
    QTextCharFormat classFormat;
    QTextCharFormat functionFormat;
    QTextCharFormat quotationFormat;
};

#endif // SYNTAXHIGHLIGHTER_H
