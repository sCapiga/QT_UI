#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_back_clicked()
{
    int curr = 0;
    curr = this->ui->stackedWidget->currentIndex();
    this->ui->stackedWidget->setCurrentIndex(curr-1);
    pushButton_back->hide();
}

