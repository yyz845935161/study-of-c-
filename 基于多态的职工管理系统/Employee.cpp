#include "Employee.h"

//���캯��
Employee::Employee(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
}

void Employee::showInforma()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\t��λ" << this->getDepartmentName()
		<<"\t��λְ�� : �����ƴ�"<<endl;

}

string Employee::getDepartmentName()
{
	return "��ͨԱ��";
}