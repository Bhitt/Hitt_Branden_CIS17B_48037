#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QUdpSocket>
#include <QMediaPlayer>
#include <QUrl>
#include <QSound>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //page one unit count holders
    int unit1, unit2, unit3;
    int unit4, unit5, unit6;
    int unit7, unit8, unit9;
    //page two unit count holders
    int unit10, unit11, unit12;
    int unit13, unit14, unit15;
    int unit16, unit17, unit18;
    //page three unit count holders
    int unit19, unit20, unit21;
    int unit22, unit23, unit24;
    int unit25, unit26, unit27;
    //total
    float total;
    //item count
    int itemC;
    int itemC2;
    //udpsocket
    QUdpSocket udpSocket;

    //sound
//    QMediaPlayer *ding;

    //variables
    QString name;
    QString add;
    QString city;
    QString state;
    QString zip;
    QString phone;
    QString card;
    QString nameOn;
    QString exp1,exp2;
    void setup();

private slots:
    void processPendingDatagrams();
};

#endif // MAINWINDOW_H
