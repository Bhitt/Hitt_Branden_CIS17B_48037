#include "checkoutchild.h"
#include "ui_checkoutchild.h"

CheckoutChild::CheckoutChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::CheckoutChild)
{
    ui->setupUi(this);
}

CheckoutChild::~CheckoutChild()
{
    delete ui;
}
