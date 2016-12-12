#ifndef USERCHILD_H
#define USERCHILD_H

#include <QMdiSubWindow>

namespace Ui {
class UserChild;
}

class UserChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit UserChild(QWidget *parent = 0);
    ~UserChild();

private:
    Ui::UserChild *ui;

public slots:
    void updateN(QString);
};

#endif // USERCHILD_H
