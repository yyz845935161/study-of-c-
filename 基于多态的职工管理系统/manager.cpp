#include "manager.h"

//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
};
//��ʾ������Ϣ
 void Manager::showInforma()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ������:" << this->m_Name
		<< "\t��λ" << this->getDepartmentName()
		<< "\t��λְ�� : ����Ա��" << endl;
};

//��ȡ��λ����
 string Manager::getDepartmentName()
 {
	 return "�߲����";
 };