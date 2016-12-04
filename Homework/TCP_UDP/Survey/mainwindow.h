#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void newFile();
    void about();


private:
    //
    Ui::MainWindow *ui;
    //
    void crMenus(); //create menus
    void crActn(); //create actions
    //Menus
    QMenu *fileMenu;
    QMenu *helpMenu;
    //Actions
    QAction *newAction;
    QAction *aboutAction;
};

#endif // MAINWINDOW_H
