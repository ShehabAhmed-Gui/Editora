#include "codeeditor.h"
#include "LineNumberArea.h"

CodeEditor::CodeEditor(QWidget *parent)
    : QPlainTextEdit(parent)
{
    Highlighter = new SyntaxHighLighter(this->document());
    lineNumberArea = new LineNumberArea(this);

    connect(this, &CodeEditor::blockCountChanged, this, &CodeEditor::updateLineNumberAreaWidth);
    connect(this, &CodeEditor::updateRequest, this, &CodeEditor::updateLineNumberArea);
    connect(this, &CodeEditor::cursorPositionChanged, this, &CodeEditor::highlightCurrentLine);

    updateLineNumberAreaWidth(0);
    highlightCurrentLine();
    setDefaultFont();
}

int CodeEditor::lineNumberAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount());
    while(max >= 10)
    {
        max /= 10;
        ++digits;
    }

    int space = 40 + fontMetrics().horizontalAdvance(QLatin1Char('9')) * digits;

    return space;
}

void CodeEditor::resizeEvent(QResizeEvent *event)
{
    QPlainTextEdit::resizeEvent(event);

    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
}

void CodeEditor::updateLineNumberAreaWidth(int newBlockCount)
{
    Q_UNUSED(newBlockCount);

    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}

void CodeEditor::highlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> extraSelections;

    if (!isReadOnly()) {
        QTextEdit::ExtraSelection selection;

        QColor lineColor = QColor(Qt::green).lighter(20);

        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = textCursor();
        selection.cursor.clearSelection();
        extraSelections.append(selection);
    }

    setExtraSelections(extraSelections);
}

void CodeEditor::updateLineNumberArea(const QRect &rect, int dy)
{
    if (dy)
        lineNumberArea->scroll(0, dy);

    else
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());

    if (rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}

void CodeEditor::setDefaultFont()
{
    int id = QFontDatabase::addApplicationFont(":/fonts/Lato/Lato-Regular.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);

    QFont font(family, 12, QFont::Normal);
    this->setFont(font);
}

void CodeEditor::lineNumberAreaPaintEvent(QPaintEvent *event)
{
    int id = QFontDatabase::addApplicationFont(":/fonts/Robo_Mono/RobotoMono-VariableFont_wght.ttf");
    QFont numbersLineFont(QFontDatabase::applicationFontFamilies(id), 13, QFont::PreferOutline);

    QPainter painter(lineNumberArea);
    QColor backGroundColor(Qt::GlobalColor::black);
    painter.fillRect(event->rect(), backGroundColor.lighter(170));

    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = qRound(blockBoundingGeometry(block).translated(contentOffset()).top());
    int bottom = top + qRound(blockBoundingRect(block).height());

    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
            QString number = QString::number(blockNumber + 1);

            painter.setPen(Qt::green);

            painter.setFont(numbersLineFont);
            painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                             Qt::AlignCenter, number);
        }

        block = block.next();
        top = bottom;
        bottom = top + qRound(blockBoundingRect(block).height());
        ++blockNumber;
    }
};
