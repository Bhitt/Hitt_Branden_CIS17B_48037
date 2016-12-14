#ifndef LCHILD_H
#define LCHILD_H

#include <QMdiSubWindow>
#include <QKeyEvent>
#include <QLabel>

#include "login.h"

class LChild : public QMdiSubWindow
{
private:

public:
    Login *log;
    LChild(QWidget *parent = 0);
};

#endif // LCHILD_H
