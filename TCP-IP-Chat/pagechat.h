#ifndef PAGECHAT_H
#define PAGECHAT_H

#include <QWidget>

namespace Ui {
class PageChat;
}

class PageChat : public QWidget
{
    Q_OBJECT

public:
    explicit PageChat(QWidget *parent = 0);
    ~PageChat();

private:
    Ui::PageChat *ui;
};

#endif // PAGECHAT_H
