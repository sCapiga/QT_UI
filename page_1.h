#ifndef PAGE_1_H
#define PAGE_1_H

#include <QWidget>

namespace Ui {
class Page_1;
}

class Page_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_1(QWidget *parent = nullptr);
    ~Page_1();

private slots:



private:
    Ui::Page_1 *ui;
};

#endif // PAGE_1_H
