#include<iostream>
using namespace std;
#include"Person.h"

template<class T>
class Base
{
public:
	T age;
};

class Son :public Base<int>
{

};

void test()
{
	Son s1;
	s1.age = 999;
	cout << s1.age << endl;
}

void test02()
{
	Person p1(55, "Ð¡ÅóÓÑ");
	p1.show();
}

int main()
{

	test02();
	system("pause");
	return 0;

}