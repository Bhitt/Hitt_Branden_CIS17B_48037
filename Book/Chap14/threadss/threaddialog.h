#ifndef THREADDIALOG_H
#define THREADDIALOG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>

#include "thread.h"

class QPushButton;

class ThreadDialog : public QDialog
{
    Q_OBJECT

public:
    ThreadDialog(QWidget *parent = 0);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void startOrStopThreadA();
    void startOrStopThreadB();

private:
    Thread threadA;
    Thread threadB;
    QPushButton *threadAButton;
    QPushButton *threadBButton;
    QPushButton *quitButton;
};

#endif // THREADDIALOG_H
