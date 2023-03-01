#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "firstwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showFullScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Exit_clicked()
{
    MainWindow::close();
}


void MainWindow::on_pushButton_Rozpocznij_clicked()
{

}

