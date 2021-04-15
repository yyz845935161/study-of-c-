#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //treeWidget树控件使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍"<<"技能");

    QTreeWidgetItem *liItem = new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minItem = new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiItem = new QTreeWidgetItem(QStringList()<<"智力");
    //加载顶层节点
    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiItem);

    //最追加字节点
    QTreeWidgetItem *l1 = new QTreeWidgetItem(QStringList()<<"德玛西亚"<<"爱的魔力转圈圈，转到天涯海角，大招3d特效"<<"审判");
    liItem->addChild(l1);


}

MainWindow::~MainWindow()
{
    delete ui;
}
