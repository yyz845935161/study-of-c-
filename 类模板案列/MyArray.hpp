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
		pAddress = new T[n];
	}

	//��������
	MyArray(const Myarry& arr)
	{
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		pAddress = new T[arr.m_capacity];
	}

	//��ֵ���������
	MyArray& opearate= (const MyArray& arr);

	
};