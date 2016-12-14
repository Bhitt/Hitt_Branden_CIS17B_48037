#ifndef CREATECHILD_H
#define CREATECHILD_H

#include <QMdiSubWindow>
#include <QMessageBox>

namespace Ui {
class CreateChild;
}

class CreateChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit CreateChild(QWidget *parent = 0);
    ~CreateChild();
    QString getQuestion();
    QString getAns1();
    QString getAns2();
    QString getAns3();

private slots:
    void on_submitbutton_clicked();

    void on_returntomenu_clicked();

private:
    Ui::CreateChild *ui;
signals:
    void crunchwrapsupreme();
    void goToSendPoll();
};

#endif // CREATECHILD_H
