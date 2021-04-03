#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget> //包含头文件Qwidget 窗口类

class mywidget : public QWidget//因为继承了，所以有show
{
    Q_OBJECT //Q_OBJECT宏，允许类中使用信号和槽的机制

public:
    mywidget(QWidget *parent = 0);//构造函数
    ~mywidget();//析构函数
};

#endif // MYWIDGET_H 防止重复包含
