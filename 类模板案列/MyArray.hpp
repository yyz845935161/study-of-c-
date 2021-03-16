#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
private:
	//数组
	T* pAddress;
	//容量
	int m_capacity;
	//大小
	int m_size;

public:
	//构造函数
	MyArray(int n)
	{
		cout << "调用了有参构造" << endl;
		this->m_capacity = n;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}

	//拷贝函数
	MyArray(const MyArray& arr)
	{
		cout << "调用了拷贝构造" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//深拷贝
		this->pAddress = new T[arr.m_capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < arr.m_size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//赋值运算符重载
	//返回自身引用是为了连等
	MyArray& operator = (const MyArray & arr)
	{
		cout << "调用operator=构造" << endl;
		if (this->pAddress!=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;

		//深拷贝
		this->pAddress = new T[arr.m_capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < arr.m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

	}


	//析构函数
	~MyArray()
	{
		cout << "析构调用" << endl;
		if (this->pAddress!=NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

	

	

	
};