#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	int* p = new int;
//	int p2;
//	cout << p << endl;
//	cout <<&p2;
//	system("pause");
//	return 0;
//}

class MyInteger
{
public:
	MyInteger()
	{
		M_num = 0;
	}
	int M_num;

	MyInteger& operator--()
	{
		M_num--;
		return *this;
	}

	 MyInteger operator--(int)
	{
		 MyInteger temp = *this;
		 M_num--;
		 return temp;

	}



};

ostream& operator<<(ostream& out,MyInteger p)
{
	out << "p.M_num="<<p.M_num;
	return out;
}

void test0()
{
	int a = 0;
	cout << a << endl;
	cout << (a--) << endl;
	cout <<(a--)<< endl;

}

void test01()
{
	MyInteger a;
	cout << a << endl;
	cout << (a--) << endl;
	cout << (a--)<< endl;
}

void test02()
{
	MyInteger a;
	cout << a << endl;
	cout << --a << endl;
	cout << --(--a) << endl;
}

void test03()
{
	int i = 0;
	cout << i << endl;
	cout << --i << endl;
	cout << --(--i) << endl;

}
int main()
{
	test0();
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}