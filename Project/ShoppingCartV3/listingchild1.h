#ifndef LISTINGCHILD1_H
#define LISTINGCHILD1_H

#include <QMainWindow>
#include <QMdiSubWindow>

namespace Ui {
class ListingChild1;
}

class ListingChild1 : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit ListingChild1(QWidget *parent = 0);
    ~ListingChild1();

private:
    Ui::ListingChild1 *ui;

public slots:
    void on_Expand_clicked();
    void on_Expand_2_clicked();
    void on_Expand_3_clicked();
    void on_Expand_4_clicked();
    void on_Expand_5_clicked();
    void on_Expand_6_clicked();
    void on_Expand_7_clicked();
    void on_Expand_8_clicked();
    void on_Expand_9_clicked();
};

#endif // LISTINGCHILD1_H
