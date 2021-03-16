#include<iostream>
using namespace std;

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


int main()
{

	test();
	system("pause");
	return 0;

}