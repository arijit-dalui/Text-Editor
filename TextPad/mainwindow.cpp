#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QTextFormat>
#include<QFont>
#include<QFontMetrics>
#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    filepath = "";
    ui->textEdit->setText("");
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename=QFileDialog::getOpenFileName(this,"open the file");
    QFile file(filename);
    filepath=filename;
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream in(&file);
    QString text=in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{

    QFile file(filepath);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString filename=QFileDialog::getSaveFileName(this,"open the file");
    QFile file(filename);
    filepath=filename;
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"..","file not open");
        return;
    }
    QTextStream out(&file);
    QString text=ui->textEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void MainWindow::on_actionCut_triggered()
{
   ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionAbout_Me_triggered()
{
    QString abouttext;
    abouttext= "Arijit Dalui\n";
    abouttext+="Education: B.Tech Information Technology (5th semester) at Indian Institute of Engineering Science and Technology Shibpur 05/2019 - Present Cgpa: 9.44\n";
            abouttext+="Skills: C (Advanced),C++ (Advanced),HTML5 (Advanced),NodeJS (Intermediate),ExpressJS (Intermediate), CSS3 (Advanced), machine learning(Intermediate), Bootstrap (Advanced), Linux (Beginner), Java (Beginner), Python (Intermediate), Data Structures (Advanced), Algorithms (Advanced), Object Oriented Programming\n";
            abouttext+="Projects:\n";
            abouttext+="1. Pseudo Random Sequence Generator (Institute Project)\n";
            abouttext+="2. Covid-19 Tracker\n";
            abouttext+="3. Imperium\n";
            abouttext+="Achievements:\n";
            abouttext+="1. 5 stars rated at Hackerrank\n";

            abouttext+="2. Successfully completed the 10 days of code challenge organized by the GNU/Linux User’s Group, NITDurgapur.\n";
            abouttext+="3. Ranked 5th on basis of Cgpa(9.41) in ﬁrst year\n";
            QMessageBox::about(this,"About Me",abouttext);
}

void MainWindow::on_actionBold_triggered()
{

//            QTextCharFormat format;
//            QTextCursor cursor = ui->textEdit->textCursor();
//            cursor.mergeCharFormat(format);


            QTextCharFormat fmt;
            fmt.setFontWeight(QFont::Bold);
             ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionUnbold_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontWeight(QFont::Normal);
     ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat format;
       format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
       if(ui->textEdit->hasFocus())
          ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSubscript_triggered()
{
    QTextCharFormat format;
       format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
       if(ui->textEdit->hasFocus())
          ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionUnderline_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(1);
     ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionNo_underline_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(0);
     ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionItalics_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontItalic(1);
     ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionNormal_triggered()
{
    QTextCharFormat fmt;
    fmt.setFontItalic(0);
     ui->textEdit->textCursor().mergeCharFormat(fmt);
}

void MainWindow::on_actionHelp_triggered()
{
    QString abouttext="Write in the open text area to enter a text.Use the Open button to open an existing file,save button to save.You can also format text using bold,italics,underline,subscript or super script features.";
    QMessageBox::about(this,"Help",abouttext);
}

void MainWindow::on_actionAbout_Textpad_triggered()
{
    QString abouttext="Description: A text editing app";
    abouttext+="Created By: Arijit Dalui under Qt Assignment Project(IIT Bombay)";
    QMessageBox::about(this,"About Me",abouttext);
}
