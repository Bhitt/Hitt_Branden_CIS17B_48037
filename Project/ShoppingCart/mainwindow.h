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

    void about();
    void on_Expand_clicked();

    void on_Expand_2_clicked();

    void on_Expand_3_clicked();

    void on_Expand_4_clicked();

    void on_Expand_5_clicked();

    void on_Expand_6_clicked();

    void on_Expand_7_clicked();

    void on_Expand_8_clicked();

    void on_Expand_9_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
