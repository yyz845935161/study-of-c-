#define _CRT_SECURE_NO_WARNINGS 1

#include "workerManager.h"

//���캯��
WorkerManager::WorkerManager()
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(RILENAME, ios::in);//���ļ�


	//�ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ������
		//��ʼ����Ա
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ����ڵ�����Ϊ�յ����
	char ch;
	ifs >> ch;
	if (ifs.eof())//�ж��Ƿ�������ļ�β
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArr = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}


	//3.�ļ����ڣ����Ҽ�¼������
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	// �ȿ��ٿռ䣬���ļ��е����ݴ���������
	this->m_EmpArr = new Worker*[num];
	this->init_Emp();
	cout << "�ļ�����ɹ���" << endl;

}

//��ʼ��Ա��
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

//�˵�
void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}


//�˳�
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}


//���ְ��
void WorkerManager::add_Emp()
{
	cout << "��������ӵ�Ա������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum;

		//���ٿռ�
		Worker** newSpace = new Worker * [newSize];

		//��ԭ�������ݿ�����ȥ
		if (this->m_EmpArr != NULL)
		{

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				*(newSpace + i) = this->m_EmpArr[i];
			}
		}

		//�����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dselect;
			cout << "�������" << i + 1 << "��ְ�����:" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "��ְ������:" << endl;
			cin >> name;
			cout << "�������" << i + 1 << "ְ����λ:" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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

		//�ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArr;

		//�����¿ռ��ָ��
		this->m_EmpArr = newSpace;

		//��������
		this->m_EmpNum += addNum;

		//�ļ���Ϊ�ǿ�
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "��ӳɹ�" << addNum << "����Ա��" << endl;

		//�����ļ�
		this->save();

	}
	else
	{
		cout << "�������" << endl;
	}

	//��������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//ͳ��ְ������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(RILENAME, ios::in);//���ļ� 
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


//�����ļ�
void WorkerManager::save()
{
	ofstream pf;
	pf.open(RILENAME, ios::out);//������ķ�ʽ���ļ�----д�ļ�

	for (int  i = 0; i < this->m_EmpNum; i++)
	{
		pf << this->m_EmpArr[i]->m_Id << " "
			<< this->m_EmpArr[i]->m_Name << " "
			<< this->m_EmpArr[i]->m_DepartmentId <<endl;
	}

	//�ر��ļ�
	pf.close();
};

//��ʾԱ��
void WorkerManager::print_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int  i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArr[i]->showInforma();
		}
	}
	
	//�����������
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