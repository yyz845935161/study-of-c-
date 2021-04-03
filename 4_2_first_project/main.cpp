#include "mywidget.h"
#include <QApplication>//包含一个应用程序的类

//main程序入口 argc 命令行变量的数量 argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a叫应用程序对象，有且仅有一个
    QApplication a(argc, argv);

    //窗口对象 mywidget父类->QWidget 空窗口
    mywidget w;

    //show方法，窗口对象，默认不会显示，必须调用show方法显示窗口
    w.show();

    //应用程序对象进入消息循环 （相当于死循环）
    //让代码阻塞到这行
    return a.exec();

//    while (treun)
//    {
//     if(点击了×)
//    }

}
