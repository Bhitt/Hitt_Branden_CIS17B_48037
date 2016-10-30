#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "loginchild.h"
#include "listingchild1.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    LoginChild *loginchild;
    ListingChild1 *listingchild1;

    bool isLog;
    bool isList1;
    bool isList2;
    bool isList3;
    bool isCheck;

private slots:
    void crLgSc(); //create the login screen
    void crLiP1(); //create the listing child page 1

    void remLog(); //set the isLog to false
    void setFal(); //set bools to false
};

#endif // MAINWINDOW_H
