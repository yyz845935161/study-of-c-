#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    resize(600,400);
    //菜单栏只能有一个
    QMenuBar* bar = menuBar();

    //将菜单栏放入窗口中
    setMenuBar(bar);
    QMenu* fileMenu = bar->addMenu("文件");
    QMenu* editMenu = bar->addMenu("编辑");

    //创建菜单项
    QAction* newAction = fileMenu->addAction("新建");
    fileMenu->addSeparator();//添加分隔符
    QAction* openAction=fileMenu->addAction("打开");



    //___________________________________________________________________________________________

    //工具栏可以有多个
    QToolBar* toolBar= new QToolBar(this);
    addToolBar(toolBar);

    //后期设置值运行左右停靠
    //toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);

    //设置浮动
    toolBar->setFloatable(false);

    //设置移动(总开关)
    toolBar->setMovable(false);

    //工具栏中设置内容
    toolBar->addAction(newAction);
    toolBar->addSeparator();//添加分割线
    toolBar->addAction(openAction);

    //工具栏中添加控件
    QPushButton* btn = new QPushButton("不要点我",this);
    //添加按钮！！！！！！！！！！！！！！！！！！！！！！！！！！
    toolBar->addWidget(btn); //这里要用addwidget

    //___---------------------------------------------------------------------
    //状态栏 最多有一个
    QStatusBar* stBar = statusBar();
    setStatusBar(stBar);
    QLabel *label = new QLabel("提示信息",this);
    stBar->addWidget(label);//左侧提示

    QLabel *label2=new QLabel(" 右侧提示信息",this);
    stBar->addPermanentWidget(label2);//右侧提示

    //---------------------------------------------------------------------------
    //铆接部件（浮动窗口） 可以有多个
    QDockWidget* dockWidget = new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    //设置后期停靠区域  只允许上下
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);



    //设置中心部件 只能一个-------------------------------------------------------------------
    QTextEdit* edit = new QTextEdit(this);
    setCentralWidget(edit);


}

MainWindow::~MainWindow()
{

}
