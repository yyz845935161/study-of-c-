#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDebug>
#include<QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //重写定时器事件
    void  timerEvent(QTimerEvent *);

private:
    Ui::MainWindow *ui;
    int id1;
    int id2;
};

#endif // MAINWINDOW_H
