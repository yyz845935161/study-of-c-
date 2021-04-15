#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //TableWidget
    //设置列数
    ui->tableWidget->setColumnCount(3);
    // 设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");
    //设置行数
    ui->tableWidget->setRowCount(5);
    //设置正文
    //ui->tableWidget->setItem(0,0,new QTableWidgetItem("亚瑟"));

    QStringList nameList;
    nameList<<"亚瑟"<<"张飞"<<"关羽"<<"刘备"<<"貂蝉";
    QList<QString>sexList;
    sexList<<"男"<<"男"<<"男"<<"男"<<"女";

    for(int i =0;i<5;i++)
    {
        int j=0;
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(sexList.at(i)));

        //int 转 QString
        ui->tableWidget->setItem(i,j++,new QTableWidgetItem(QString::number(i+18)));

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
