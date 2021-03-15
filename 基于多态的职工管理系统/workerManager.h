#pragma once//防止头文件多次包含
#include <iostream>//包含输入输入流头文件
using namespace std;//标准命名空间 cout cin
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define RILENAME "empFile.txt"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;
	//职工数组指针
	Worker** m_EmpArr;
	//判断文件是否为空
	bool m_FileIsEmpty;

	//添加职工
	void add_Emp();

	//保存文件
	void save();

	//统计职工人数
	int get_EmpNum();

	

	~WorkerManager();
};