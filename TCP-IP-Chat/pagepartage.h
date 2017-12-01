#ifndef PAGEPARTAGE_H
#define PAGEPARTAGE_H

#include <QWidget>

namespace Ui {
class PagePartage;
}

class PagePartage : public QWidget
{
    Q_OBJECT

public:
    explicit PagePartage(QWidget *parent = 0);
    ~PagePartage();

private:
    Ui::PagePartage *ui;
};

#endif // PAGEPARTAGE_H
