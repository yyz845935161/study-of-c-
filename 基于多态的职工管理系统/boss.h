#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//������

class Boss :public Worker
{
public:
	//���캯��
	Boss(int id, string name, int did);
	//��ʾ������Ϣ
	virtual void showInforma();

	//��ȡ��λ����
	virtual string getDepartmentName();
};