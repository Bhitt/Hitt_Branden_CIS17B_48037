#ifndef MENUCHILD_H
#define MENUCHILD_H

#include <QMdiSubWindow>

namespace Ui {
class MenuChild;
}

class MenuChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit MenuChild(QWidget *parent = 0);
    ~MenuChild();

private:
    Ui::MenuChild *ui;

signals:
    void goToCreate();
    void goToNum();

private slots:
    void on_pushButton_clicked();
    void on_take_button_clicked();
};

#endif // MENUCHILD_H
