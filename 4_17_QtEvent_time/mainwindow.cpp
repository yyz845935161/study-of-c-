#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //启动定时器
    id1 =startTimer(1000);//参数1 间隔 单位 毫秒
    //QDebug()<<id1;
    id2 =startTimer(2000);

    //定时器第二种方式
     QTimer * timer = new QTimer(this);
    //启动定时器
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
        static int num3= 1 ;

        //label3 每0.5s +1
        ui->label_3->setText(QString::number(num3++));

    });

    //点击暂停按钮，实现停止定时器
    connect(ui->btn,&QPushButton::clicked,[=](){
        timer->stop();
    });

    connect(ui->btn_start,&QPushButton::clicked,[=](){
        timer->start(500);
    });
}



void MainWindow::timerEvent(QTimerEvent *ev)
{
    static int num= 1 ;
    if(ev->timerId()==id1)
    ui->label->setText(QString::number(num++));

    static int num2= 1 ;
    if(ev->timerId()==id2)
    ui->label_2->setText(QString::number(num2++));

}

MainWindow::~MainWindow()
{
    delete ui;
}
