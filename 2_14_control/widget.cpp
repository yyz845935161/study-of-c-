#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置单选按钮 男默认选中
    ui->radioButtonMan->setChecked(1);

    //选中女后 打印信息
    connect(ui->radioButtonWoman,&QRadioButton::clicked,[=](){
        qDebug()<<"选中了女";

    });

    //多选按钮 2是选中，0是未选中 1是半选
    connect(ui->checkBox_Boss,&QCheckBox::stateChanged,[=](int state){

        qDebug()<<"老板娘确实不错"<<state;
    });
}

Widget::~Widget()
{
    delete ui;
}
