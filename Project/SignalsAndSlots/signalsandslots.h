#ifndef SIGNALSANDSLOTS_H
#define SIGNALSANDSLOTS_H
#include "dialog.h"
#include <QMainWindow>

namespace Ui {
class SignalsAndSlots;
}

class SignalsAndSlots : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignalsAndSlots(QWidget *parent = 0);
    ~SignalsAndSlots();
    Dialog *dialog;

private:
    Ui::SignalsAndSlots *ui;

public slots:
    changeRoom();
};

#endif // SIGNALSANDSLOTS_H
