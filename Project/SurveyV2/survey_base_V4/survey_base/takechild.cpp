#include "takechild.h"
#include "ui_takechild.h"

takeChild::takeChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::takeChild)
{
    ui->setupUi(this);
}

takeChild::~takeChild()
{
    delete ui;
}

void takeChild::setQuest(QString quest)
{
    ui->question->setText(quest);
    ui->question->setStyleSheet("font-size:24px;");
}
void takeChild::setAns1(QString ans)
{
    ui->radioButton1->setText(ans);
}

void takeChild::setAns2(QString ans)
{
    ui->radioButton2->setText(ans);
}

void takeChild::setAns3(QString ans)
{
    ui->radioButton3->setText(ans);
}

void takeChild::on_take_submit_clicked()
{
    if(ui->radioButton1->isChecked())
    {
        emit choice(ui->question->text(),1);
    }
    else if(ui->radioButton2->isChecked())
    {
        emit choice(ui->question->text(),2);
    }
    else if(ui->radioButton3->isChecked())
    {
        emit choice(ui->question->text(),3);
    }
    emit goToResults();
}

void takeChild::on_take_result_clicked()
{
    emit goToResults();
}
