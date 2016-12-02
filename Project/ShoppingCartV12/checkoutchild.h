#ifndef CHECKOUTCHILD_H
#define CHECKOUTCHILD_H

#include <QMdiSubWindow>

namespace Ui {
class CheckoutChild;
}

class CheckoutChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit CheckoutChild(QWidget *parent = 0);
    ~CheckoutChild();

private:
    Ui::CheckoutChild *ui;
};

#endif // CHECKOUTCHILD_H
