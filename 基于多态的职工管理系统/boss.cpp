#include "boss.h"

//构造函数
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
}

void Boss::showInforma()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t岗位" << this->getDepartmentName()
		<< "\t岗位职责 : 管理所有事物" << endl;

}

string Boss::getDepartmentName()
{
	return "总裁";
}