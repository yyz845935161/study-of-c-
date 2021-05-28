#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<set>

void printset(set<int>&s)
{
	for (set<int>::const_iterator it =s.begin(); it !=s.end(); it++)
	{
		cout << *it<<"  ";
	}
	cout << endl;
}

class compear
{
public:
	bool operator ()(int v1,int v2)const
	{
		return v1 > v2;
	}
};

void test01(){
	set<int, compear>s;
	s.insert(10);
	s.insert(50);
	s.insert(40);
	s.insert(20);
	s.insert(30);
	
	for (set<int, compear>::iterator it=s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}




int main()
{
	test01();
	system("pause");
	return 0;
}