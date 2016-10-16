#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//System Libraries
#include <QMainWindow>
#include <QAction>

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
    void crActns();
    void crMenus();
    //Menus
    QMenu *fileMenu;
    QMenu *helpMenu;
    //Actions
    QAction *newAction;
    QAction *aboutAction;

};

#endif // MAINWINDOW_H
