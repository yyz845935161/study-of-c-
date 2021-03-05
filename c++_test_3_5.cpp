#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Person
{
public:
	int A;
	double B;//非静态成员变量，属于类的对象 

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
	//空对象占用內存空间：1个字节，为了区分空对象占內存的位置 
	//每个空对象也应该有独一无二的內存空间 
	Person p;
	cout << "p的大小为： " << sizeof(p) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}