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
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.ExitSystem();
			break;

		case 1: //���ְ��
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls");//��������
			break;
		}
	}

	system("pause");
	return 0;
}

void test02()
{
	Worker* worker =NULL;
	worker = new Employee(101, "����", 100001); //����Ƕ�̬
	worker->showInforma();
	delete worker;

	worker = new Manager(2, "����", 2000001);
	worker->showInforma();
	delete worker;

	worker = new Boss(3, "����", 90000001);
	worker->showInforma();
	delete worker;
}
int main()
{
	test02();
	system("pause");
	return 0;
}