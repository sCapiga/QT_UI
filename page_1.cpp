#include "page_1.h"
#include "ui_page_1.h"

Page_1::Page_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_1)
{
    ui->setupUi(this);

}

Page_1::~Page_1()
{
    delete ui;
}

