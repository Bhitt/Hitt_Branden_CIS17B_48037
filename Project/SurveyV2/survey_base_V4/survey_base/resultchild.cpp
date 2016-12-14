#include "resultchild.h"
#include "ui_resultchild.h"

ResultChild::ResultChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::ResultChild)
{
    ui->setupUi(this);
}

ResultChild::~ResultChild()
{
    delete ui;


}

void ResultChild::setP1(int val,QString ans)
{
    qDebug() << ans;
    ui->prog1->setValue(val);
    ui->ans1->setText(ans);
}

void ResultChild::setP2(int val,QString ans)
{
    qDebug() << ans;
    ui->prog2->setValue(val);
    ui->ans2->setText(ans);
}

void ResultChild::setP3(int val,QString ans)
{
    qDebug() << ans;
    ui->prog3->setValue(val);
    ui->ans3->setText(ans);
}

void ResultChild::setQuestion(QString q)
{
    qDebug() << q;
    ui->label->setText(q);
    ui->label->setStyleSheet("font-size:24px; qproperty-alignment: AlignCenter;");
}

void ResultChild::on_gotomenu_clicked()
{
    emit tacobell();
}
