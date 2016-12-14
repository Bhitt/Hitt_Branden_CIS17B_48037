#ifndef TAKECHILD_H
#define TAKECHILD_H

#include <QMdiSubWindow>

namespace Ui {
class takeChild;
}

class takeChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit takeChild(QWidget *parent = 0);
    ~takeChild();
    void setQuest(QString);
    void setAns1(QString);
    void setAns2(QString);
    void setAns3(QString);
private slots:
    void on_take_submit_clicked();
    void on_take_result_clicked();

signals:
    void choice(QString,int);
    void goToResults();

private:
    Ui::takeChild *ui;
};

#endif // TAKECHILD_H
