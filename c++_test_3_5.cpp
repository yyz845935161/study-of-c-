#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Person
{
public:
	int A;
	double B;//�Ǿ�̬��Ա������������Ķ��� 

	int getA()
	{
		return A;
	}

	void setA(int x)
	{
		A = x;
	}
};

void test01()
{
	//�ն���ռ�Ãȴ�ռ䣺1���ֽڣ�Ϊ�����ֿն���ռ�ȴ��λ�� 
	//ÿ���ն���ҲӦ���ж�һ�޶��ăȴ�ռ� 
	Person p;
	cout << "p�Ĵ�СΪ�� " << sizeof(p) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}