#pragma once//��ֹͷ�ļ���ΰ���
#include <iostream>//��������������ͷ�ļ�
using namespace std;//��׼�����ռ� cout cin
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define RILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	Worker** m_EmpArr;
	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//���ְ��
	void add_Emp();

	//�����ļ�
	void save();

	//ͳ��ְ������
	int get_EmpNum();

	

	~WorkerManager();
};