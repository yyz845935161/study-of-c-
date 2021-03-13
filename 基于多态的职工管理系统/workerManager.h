#pragma once//防止头文件多次包含
#include <iostream>//包含输入输入流头文件
using namespace std;//标准命名空间 cout cin

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	~WorkerManager();
};