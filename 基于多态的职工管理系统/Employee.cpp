#include "Employee.h"

//构造函数
Employee::Employee(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
}

void Employee::showInforma()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t岗位" << this->getDepartmentName()
		<<"\t岗位职责 : 言听计从"<<endl;

}

string Employee::getDepartmentName()
{
	return "普通员工";
}