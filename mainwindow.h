#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "firstwindow.h"


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
    void on_pushButton_Exit_clicked();

    void on_pushButton_Rozpocznij_clicked();

private:
    Ui::MainWindow *ui;
    FirstWindow *fWindow;
    MainWindow *mWindow;
};
#endif // MAINWINDOW_H