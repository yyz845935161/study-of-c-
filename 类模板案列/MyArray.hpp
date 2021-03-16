#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
private:
	//����
	T* pAddress;
	//����
	int m_capacity;
	//��С
	int m_size;

public:
	//���캯��
	MyArray(int n)
	{
		cout << "�������вι���" << endl;
		this->m_capacity = n;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		cout << "�����˿�������" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//���
		this->pAddress = new T[arr.m_capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < arr.m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//��ֵ���������
	//��������������Ϊ������
	MyArray& operator = (const MyArray & arr)
	{
		cout << "����operator=����" << endl;
		if (this->pAddress!=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//���
		this->pAddress = new T[arr.m_capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < arr.m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

	}


	//��������
	~MyArray()
	{
		cout << "��������" << endl;
		if (this->pAddress!=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

	

	

	
};