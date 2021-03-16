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
		pAddress = new T[n];
	}

	//拷贝函数
	MyArray(const Myarry& arr)
	{
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		pAddress = new T[arr.m_capacity];
	}

	//赋值运算符重载
	MyArray& opearate= (const MyArray& arr);

	
};