#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

//��ť������
void Widget::on_pushButton_clicked()
{
    //�����б༭������
    ui->lineEdit->setText("hello qt");

    //��ȡ�б༭������
    QString str = ui->lineEdit->text();

    //���б༭���������ø���ǩ
    ui->label->setText(str);
}
