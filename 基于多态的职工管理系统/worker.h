#pragma once
#include <iostream>
using namespace std;
#include<string>
#include<string.h>

//ְ��������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInforma() = 0;

	//��ȡ��λ����
	virtual string getDepartmentName() = 0;

	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DepartmentId;
};