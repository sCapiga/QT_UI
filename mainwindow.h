#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "page_1.h"



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

    void on_pushButton_back_clicked();



    void on_pushButton_next_clicked();

private:
    Ui::MainWindow *ui;
    Page_1 page1;
};
#endif // MAINWINDOW_H

/*
class Page_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_1(QWidget *parent = 0);
    ~Page_1();


private slots:

    void on_pushButton_Exit_clicked();

    void on_pushButton_Rozpocznij_clicked();

    void on_pushButton_back_clicked();



private:
    Ui::Page_1 *ui;

};
*/

