#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    unsigned int start_time;
    unsigned int end_time;
    int value=0;
    char arr[21];

};

#endif // MAINWINDOW_H
