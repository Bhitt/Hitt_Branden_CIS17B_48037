#ifndef REGISTERCHILD_H
#define REGISTERCHILD_H

#include <QMdiSubWindow>
#include <QDebug>
#include <QCloseEvent>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QMessageBox>


namespace Ui {
class RegisterChild;
}

class RegisterChild : public QMdiSubWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *closeEvent);
public:
    explicit RegisterChild(QWidget *parent = 0);
    ~RegisterChild();

    QString getOne();
    QString getTwo();
    void setEChck(QString data);

private:
    Ui::RegisterChild *ui;

    bool passTog;
    void setOne(QString data);
    bool regEx();
    QRegularExpressionMatch passMatch;
    QRegularExpressionMatch nameMatch;
    QMessageBox *tip;

signals:
    void submit();
    void back();
    void clReg();

private slots:
    void passChck();
    void enableSubmit();
    void showPass();

    void on_Submit_clicked();
    void on_Back_clicked();
    void on_toolButton_clicked();
};

#endif // REGISTERCHILD_H
