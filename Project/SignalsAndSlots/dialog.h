#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "signalsandslots.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0, SignalsAndSlots &sig);
    ~Dialog();

private:
    Ui::Dialog *ui;
signals:
    void enterDoor();
public slots:
    void recolor();

};

#endif // DIALOG_H
