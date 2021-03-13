#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;

int test01()
{
	WorkerManager wm;
	int choice = 0;
	
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //退出系统
			wm.ExitSystem();
			break;

		case 1: //添加职工
			wm.add_Emp();
			break;
		case 2: //显示职工
			
			break;
		case 3: //删除职工
			break;
		case 4: //修改职工
			break;
		case 5: //查找职工
			break;
		case 6: //排序职工
			break;
		case 7: //清空文件
			break;
		default:
			system("cls");//清屏操作
			break;
		}
	}

	system("pause");
	return 0;
}

void test02()
{
	Worker* worker =NULL;
	worker = new Employee(101, "张三", 100001); //这就是多态
	worker->showInforma();
	delete worker;

	worker = new Manager(2, "李四", 2000001);
	worker->showInforma();
	delete worker;

	worker = new Boss(3, "渣渣", 90000001);
	worker->showInforma();
	delete worker;
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}