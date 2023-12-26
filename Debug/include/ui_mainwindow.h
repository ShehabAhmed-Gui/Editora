/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "codeeditor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionCopy;
    QAction *actionOpen_Folder;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *Body;
    QHBoxLayout *horizontalLayout_2;
    QWidget *folder_tree_container;
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    CodeEditor *textEditor;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1014, 677);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	background: rgb(46, 47, 48);\n"
"	color: white;\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"	background-color: black;\n"
"	color: red;\n"
"	\n"
"	/*font: 8pt \"Segoe UI\";*/\n"
"}\n"
"\n"
"QMenuBar\n"
"{\n"
"	/*font: 11pt \"Segoe UI\";*/\n"
"	color: rgb(194, 194, 194);;\n"
"	spacing: 5px;\n"
"	background: black;\n"
"}\n"
"QMenuBar::item:selected\n"
"{\n"
"	background: rgb(111, 111, 111); \n"
"}\n"
"QMenuBar::item:pressed \n"
"{\n"
"    background: red;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"	background-color: rgb(47, 47, 47);\n"
"	margin: 4px;\n"
"	icon-size: 12px;\n"
"}\n"
"QMenu::separator \n"
"{\n"
"    height: 1px;\n"
"    background: red;\n"
"    margin: 2px;\n"
"}\n"
"QMenu::item:selected\n"
"{\n"
"	background-color: rgb(0, 66, 99);\n"
"}\n"
"\n"
"QToolBar\n"
"{\n"
"	background-color: black;\n"
"	spacing: 18px;\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	border-bottom: 1px solid red;\n"
"}\n"
"QToolButton::pressed\n"
"{\n"
"	border: none;\n"
"	border-bottom: 1px sol"
                        "id white;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"	width: 13px;\n"
"}\n"
"QScrollBar::down-button\n"
"{\n"
"	background: rgb(50, 50, 50);\n"
"	border: 4px solid red;\n"
"}\n"
"QScrollBar::down-arrow::vertical, QScrollBar::up-arrow:vertical\n"
"{\n"
"	border-image: url(:/tree_branch_open);\n"
"}\n"
"QScrollBar::handle\n"
"{\n"
"	border: 1px solid gray;\n"
"	border-radius: 4px;\n"
"	background: rgb(79, 80, 80);\n"
"}\n"
"QScrollBar::sub-page, QScrollBar::add-page\n"
"{\n"
"	background: none;\n"
"}"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/new_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/open_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName("actionSelect_All");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName("actionOpen_Folder");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/open_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Folder->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Body = new QWidget(centralwidget);
        Body->setObjectName("Body");
        Body->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	color: white;\n"
"	background: black;\n"
"\n"
"	selection-color: white;\n"
"	selection-background-color: rgb(0, 66, 99);\n"
"\n"
"	border: 1px solid rgb(98, 98, 98);	\n"
"	padding: 5px;\n"
"}\n"
"QPlainTextEdit::focus\n"
"{\n"
"	border: 1px solid #003333;\n"
"}\n"
"\n"
"#folder_tree_container\n"
"{\n"
"	background-color: rgb(34, 34, 34);\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(Body);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        folder_tree_container = new QWidget(Body);
        folder_tree_container->setObjectName("folder_tree_container");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(folder_tree_container->sizePolicy().hasHeightForWidth());
        folder_tree_container->setSizePolicy(sizePolicy);
        folder_tree_container->setMinimumSize(QSize(350, 0));
        folder_tree_container->setStyleSheet(QString::fromUtf8("QTreeView\n"
"{\n"
"	background: #101314;\n"
"}\n"
"QTreeView::branch:has-siblings:!adjoins-item {\n"
"    border-image: url(:/icons/tree_vline.png) 0;\n"
"}\n"
"\n"
"QTreeView::branch:has-siblings:adjoins-item {\n"
"    /*border-image: url(:/icons/tree_branch_open.png) 0;*/\n"
"}\n"
"\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item {\n"
"    border-image: url(:/icons/tree_branch_end.png) 0;\n"
"}\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings {\n"
"        border-image: none;\n"
"        image: url(:/icons/tree_branch_closed.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  {\n"
"        border-image: none;\n"
"        image: url(:/icons/tree_branch_open.png);\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(folder_tree_container);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(folder_tree_container);
        treeView->setObjectName("treeView");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        treeView->setMinimumSize(QSize(0, 0));
        treeView->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(treeView);


        horizontalLayout_2->addWidget(folder_tree_container);

        textEditor = new CodeEditor(Body);
        textEditor->setObjectName("textEditor");
        textEditor->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(textEditor);


        horizontalLayout->addWidget(Body);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1014, 21));
        menubar->setMinimumSize(QSize(0, 0));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuFile->setGeometry(QRect(344, 101, 138, 181));
        menuFile->setMinimumSize(QSize(0, 0));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        toolBar->setMinimumSize(QSize(0, 40));
        toolBar->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Folder);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionCopy);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "casdasds", nullptr));
        actionOpen->setText(QString());
        actionSave->setText(QString());
        actionExit->setText(QString());
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste             Ctrl+V", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All      Ctrl+A", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy             Ctrl+C", nullptr));
        actionOpen_Folder->setText(QString());
        textEditor->setPlainText(QCoreApplication::translate("MainWindow", "fasdasdas", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
