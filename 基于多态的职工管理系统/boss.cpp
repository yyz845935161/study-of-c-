#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
}

void Boss::showInforma()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\t��λ" << this->getDepartmentName()
		<< "\t��λְ�� : ������������" << endl;

}

string Boss::getDepartmentName()
{
	return "�ܲ�";
}