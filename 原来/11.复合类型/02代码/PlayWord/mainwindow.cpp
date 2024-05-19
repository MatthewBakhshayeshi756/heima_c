#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //�����ĸ
    srand((unsigned int)time(NULL));
    for(int i=0;i<20;i++)
        arr[i] = rand()%26+'a';
    arr[20]=0;

    //���ý���
    ui->label->setText("");
    ui->textEdit->setText("");
    ui->label_2->setText("");
    ui->label->setText(arr);

    start_time = time(NULL);

    //���ü�����
    value =0;
}

void MainWindow::on_pushButton_2_clicked()
{
    end_time = time(NULL);
    //��ȡ�ı�����
    QString txt =  ui->textEdit->toPlainText();
    //ȥ���ı��еĿո�
    txt.isEmpty();
    const char * temp = txt.toStdString().data();
    int i=0;
    while(*temp++==arr[i++] && *temp)
        value++;
    QString res =QString("Right : %1%  Time : %2(s)").arg(value/20.0*100).arg(end_time- start_time);
    ui->label_2->setText(res);

}









