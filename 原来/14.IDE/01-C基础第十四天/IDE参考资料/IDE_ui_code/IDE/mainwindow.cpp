#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#define cout qDebug()

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

//�½���ť�Ĵ�����
void MainWindow::on_actionNew_triggered()
{
    cout << "test button";

    //ͨ����������༭���ؼ���������������
    ui->textEdit->setText("hello qt");
}
