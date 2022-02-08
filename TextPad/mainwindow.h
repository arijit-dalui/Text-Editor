#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionAbout_Me_triggered();

    void on_actionBold_triggered();

    void on_actionUnbold_triggered();

    void on_actionSuperscript_triggered();

    void on_actionSubscript_triggered();

    void on_actionUnderline_triggered();

    void on_actionNo_underline_triggered();

    void on_actionItalics_triggered();

    void on_actionNormal_triggered();

    void on_actionHelp_triggered();

    void on_actionAbout_Textpad_triggered();

private:
    Ui::MainWindow *ui;
    QString filepath;
};
#endif // MAINWINDOW_H
