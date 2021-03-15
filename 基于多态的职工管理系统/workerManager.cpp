#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"

//构造函数
WorkerManager::WorkerManager()
{
	//1、文件不存在
	ifstream ifs;
	ifs.open(RILENAME, ios::in);//读文件


	//文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化属性
		//初始化人数
		//初始化成员
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件存在但内容为空的情况
	char ch;
	ifs >> ch;
	if (ifs.eof())//判断是否读到了文件尾
	{
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}


	//3.文件存在，并且记录了数据
	int num = this->get_EmpNum();
	cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	// 先开辟空间，将文件中的数据存入数组中
	this->m_EmpArr = new Worker*[num];
	this->init_Emp();
	cout << "文件导入成功！" << endl;

}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(RILENAME, ios::in);

	int id;
	string name;
	int did;

	int i = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;

		if (did == 1)
		{
			worker = new Employee(id, name ,did);
		}
		else if(did==2)
		{
			worker = new Manager(id, name, did);
		}
		else
		{
			worker = new Boss(id, name, did);
		}
		this->m_EmpArr[i] = worker;
		i++;
	}
	ifs.close();

};

//菜单
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}


//退出
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出程序
}


//添加职工
void WorkerManager::add_Emp()
{
	cout << "请输入添加的员工数量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//添加
		//计算添加新空间大小
		int newSize = this->m_EmpNum + addNum;

		//开辟空间
		Worker** newSpace = new Worker * [newSize];

		//将原来的数据拷贝过去
		if (this->m_EmpArr != NULL)
		{

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				*(newSpace + i) = this->m_EmpArr[i];
			}
		}

		//批量添加数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dselect;
			cout << "请输入第" << i + 1 << "个职工编号:" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个职工姓名:" << endl;
			cin >> name;
			cout << "请输入第" << i + 1 << "职工岗位:" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dselect;

			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 1);
				break;
			case 3:
				worker = new Boss(id, name, 1);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有的空间
		delete[] this->m_EmpArr;

		//更改新空间的指向
		this->m_EmpArr = newSpace;

		//更改人数
		this->m_EmpNum += addNum;

		//文件置为非空
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "添加成功" << addNum << "名新员工" << endl;

		//保存文件
		this->save();

	}
	else
	{
		cout << "输入错误" << endl;
	}

	//按任意键清屏，回到上级目录
	system("pause");
	system("cls");
}

//统计职工人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(RILENAME, ios::in);//读文件 
	int id;
	string name;
	int did;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
};


//保存文件
void WorkerManager::save()
{
	ofstream pf;
	pf.open(RILENAME, ios::out);//用输出的方式打开文件----写文件

	for (int  i = 0; i < this->m_EmpNum; i++)
	{
		pf << this->m_EmpArr[i]->m_Id << " "
			<< this->m_EmpArr[i]->m_Name << " "
			<< this->m_EmpArr[i]->m_DepartmentId <<endl;
	}

	//关闭文件
	pf.close();
};

//显示员工
void WorkerManager::print_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int  i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArr[i]->showInforma();
		}
	}
	
	//按任意键清屏
	system("pause");
	system("cls");
};

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArr != NULL)
	{
		delete[] this->m_EmpArr;
		this->m_EmpArr = NULL;
	}
}