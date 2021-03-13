#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepartmentId = did;
};
//显示个人信息
 void Manager::showInforma()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名:" << this->m_Name
		<< "\t岗位" << this->getDepartmentName()
		<< "\t岗位职责 : 管理员工" << endl;
};

//获取岗位名称
 string Manager::getDepartmentName()
 {
	 return "高层管理";
 };