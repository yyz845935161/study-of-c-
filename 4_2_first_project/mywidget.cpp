#include "mywidget.h"
#include <QPushButton>
#include "mypushbutton.h"
//命名规范
//类名 首字母大写，单词直接首字母大写
//函数名 变量名称 首字母小写，单词和单词之间首字母大写

//快捷键
//注释 ctrl + /
//运行 ctrl + r
//编译 ctrl + b（build）
//查找 ctrl + f
//整行移动 ctrl + shift + ↑ ↓
//帮助F1 退出 esc
//自动对齐 ctrl + i
//同名之间的.h和.cpp切换 F4

mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
{

    //创建一个按钮
    QPushButton *btn = new QPushButton;
    //btn->show(); //show 以顶层方式弹出窗口控件
    btn->setParent(this);

    //显示文本
    btn->setText("第一个按钮");

    //创建第二个按钮,按照控件大小创建窗口
    QPushButton *btn2 = new QPushButton("点一下会不会更爱我",this);

    //按钮设置大小
    btn2->resize(300,100);

    //移动btn2的位置
    btn2->move(100,200);

    //重置窗口大小
    resize(600,400);

    //设置固定的窗口大小
    setFixedSize(600,400);

    //这是我的按钮对象
    MyPushButton *myBtn = new MyPushButton;
    myBtn->setText("我做的按钮");
    myBtn->move(200,0);
    myBtn->setParent(this);


    //需求 点击我的按钮 关闭窗口
    //参数1 信号的发送者 参数2 发送的信号(函数的地址)
    //参数3 信号的接受者 参数4 处理的槽函数
    connect(myBtn,&MyPushButton::clicked,this,&mywidget::close);

    //使用父类也可以
   // connect(btn2,&QPushButton::clicked,this,&QWidget::close);



    //设置 窗口标题
    setWindowTitle("第一个窗口");


}

mywidget::~mywidget()
{

}
