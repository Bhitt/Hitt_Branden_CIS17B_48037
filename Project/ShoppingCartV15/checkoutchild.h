#ifndef CHECKOUTCHILD_H
#define CHECKOUTCHILD_H

#include <QMainWindow>
#include <QMdiSubWindow>
#include <QLabel>
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <iomanip>
#include <iostream>

namespace Ui {
class CheckoutChild;
}

class CheckoutChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit CheckoutChild(QWidget *parent = 0);
    ~CheckoutChild();

private:
    Ui::CheckoutChild *ui;

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
    //setup
    void setup();
    //timer for setups
    QTimer *timer;
    //validation functions
    bool isFilled();
    bool regEx();

private slots:
    void on_GoTo1_clicked();
    void on_GoTo2_clicked();
    void on_GoTo3_clicked();
    void grabAll(int u1,int u2,int u3,int u4,int u5,int u6,int u7,int u8,int u9,int u10,int u11,int u12,int u13,int u14,int u15,int u16,int u17,int u18,int u19,int u20,int u21,int u22,int u23,int u24,int u25,int u26,int u27,float tot);
    void dos2();
    void validate();

    void on_subOrder_clicked();

signals:
    void page1();
    void page2();
    void page3();
    void fetchC();
    void dos();

};

#endif // CHECKOUTCHILD_H
