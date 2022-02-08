/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout_Me;
    QAction *actionBold;
    QAction *actionUnbold;
    QAction *actionSuperscript;
    QAction *actionSubscript;
    QAction *actionUnderline;
    QAction *actionNo_underline;
    QAction *actionItalics;
    QAction *actionNormal;
    QAction *actionHelp;
    QAction *actionAbout_Textpad;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout_Me;
    QMenu *menuFormat;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/img/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/img/diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/img/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/img/files.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/img/undo-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/img/redo-arrow-symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionAbout_Me = new QAction(MainWindow);
        actionAbout_Me->setObjectName(QString::fromUtf8("actionAbout_Me"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/img/information-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Me->setIcon(icon9);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/img/icons8-bold-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon10);
        actionUnbold = new QAction(MainWindow);
        actionUnbold->setObjectName(QString::fromUtf8("actionUnbold"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/img/icons8-bold-your-text-field-on-document-file-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnbold->setIcon(icon11);
        actionSuperscript = new QAction(MainWindow);
        actionSuperscript->setObjectName(QString::fromUtf8("actionSuperscript"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/rec/img/icons8-superscript-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuperscript->setIcon(icon12);
        actionSubscript = new QAction(MainWindow);
        actionSubscript->setObjectName(QString::fromUtf8("actionSubscript"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/rec/img/icons8-subscript-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSubscript->setIcon(icon13);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/rec/img/icons8-underline-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon14);
        actionNo_underline = new QAction(MainWindow);
        actionNo_underline->setObjectName(QString::fromUtf8("actionNo_underline"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/rec/img/icons8-u-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNo_underline->setIcon(icon15);
        actionItalics = new QAction(MainWindow);
        actionItalics->setObjectName(QString::fromUtf8("actionItalics"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/rec/img/icons8-italic-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalics->setIcon(icon16);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName(QString::fromUtf8("actionNormal"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/rec/img/icons8-letter-i-26.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon17);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/rec/img/icons8-help-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon18);
        actionAbout_Textpad = new QAction(MainWindow);
        actionAbout_Textpad->setObjectName(QString::fromUtf8("actionAbout_Textpad"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/rec/img/icons8-about-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Textpad->setIcon(icon19);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(240, 100, 104, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAbout_Me = new QMenu(menubar);
        menuAbout_Me->setObjectName(QString::fromUtf8("menuAbout_Me"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout_Me->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbout_Me->addAction(actionAbout_Me);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionUnbold);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionNo_underline);
        menuFormat->addAction(actionItalics);
        menuFormat->addAction(actionNormal);
        menuFormat->addAction(actionSuperscript);
        menuFormat->addAction(actionSubscript);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout_Textpad);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionUnbold);
        toolBar->addSeparator();
        toolBar->addAction(actionSuperscript);
        toolBar->addAction(actionSubscript);
        toolBar->addSeparator();
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionNo_underline);
        toolBar->addSeparator();
        toolBar->addAction(actionItalics);
        toolBar->addAction(actionNormal);
        toolBar->addSeparator();
        toolBar->addAction(actionHelp);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout_Me);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionAbout_Me->setText(QApplication::translate("MainWindow", "About Me", nullptr));
        actionBold->setText(QApplication::translate("MainWindow", "Bold", nullptr));
        actionUnbold->setText(QApplication::translate("MainWindow", "Unbold", nullptr));
        actionSuperscript->setText(QApplication::translate("MainWindow", "Superscript", nullptr));
        actionSubscript->setText(QApplication::translate("MainWindow", "Subscript", nullptr));
        actionUnderline->setText(QApplication::translate("MainWindow", "Underline", nullptr));
        actionNo_underline->setText(QApplication::translate("MainWindow", "No underline", nullptr));
        actionItalics->setText(QApplication::translate("MainWindow", "Italics", nullptr));
        actionNormal->setText(QApplication::translate("MainWindow", "No Italic", nullptr));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", nullptr));
        actionAbout_Textpad->setText(QApplication::translate("MainWindow", "About Textpad", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout_Me->setTitle(QApplication::translate("MainWindow", "About Me", nullptr));
        menuFormat->setTitle(QApplication::translate("MainWindow", "Format", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
