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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QTreeView *folder_tree_2;
    QPlainTextEdit *textEditor;
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
"	font: 11pt \"Segoe UI\";\n"
"}\n"
"QToolTip\n"
"{\n"
"\n"
"}\n"
"QMenuBar\n"
"{\n"
"	font: 11pt \"Segoe UI\";\n"
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
"QToolButton\n"
"{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	border-bottom: 1px solid red;\n"
"}\n"
"QToolButton::pressed\n"
"{\n"
"	border: none;\n"
"	border-bottom: 1px solid white;\n"
"}"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/new_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/open_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        icon4.addFile(QString::fromUtf8(":/resources/open_folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Folder->setIcon(icon4);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        Body = new QWidget(centralwidget);
        Body->setObjectName("Body");
        Body->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"	color: green;\n"
"	background: black;\n"
"\n"
"	selection-color: white;\n"
"	selection-background-color: rgb(0, 66, 99);\n"
"\n"
"	border: 1px solid rgb(98, 98, 98);	\n"
"	padding: 5px;\n"
"	\n"
"	font: 600 14pt \"Segoe UI\";\n"
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
"QTreeView\n"
"{\n"
"	background-color: black;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(Body);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        folder_tree_container = new QWidget(Body);
        folder_tree_container->setObjectName("folder_tree_container");
        verticalLayout = new QVBoxLayout(folder_tree_container);
        verticalLayout->setObjectName("verticalLayout");
        folder_tree_2 = new QTreeView(folder_tree_container);
        folder_tree_2->setObjectName("folder_tree_2");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(folder_tree_2->sizePolicy().hasHeightForWidth());
        folder_tree_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(folder_tree_2);


        horizontalLayout_2->addWidget(folder_tree_container);

        textEditor = new QPlainTextEdit(Body);
        textEditor->setObjectName("textEditor");

        horizontalLayout_2->addWidget(textEditor);


        horizontalLayout->addWidget(Body);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1014, 25));
        menubar->setMinimumSize(QSize(0, 0));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuFile->setGeometry(QRect(344, 105, 160, 209));
        menuFile->setMinimumSize(QSize(0, 0));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);
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
        actionNew->setText(QString());
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
