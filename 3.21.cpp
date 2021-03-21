#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>

class Person
{
public:
	string name;
	int age;
	Person(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
};

void test01()
{
	vector<Person*> v;
	
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator t=v.begin();t!=v.end() ; t++)
	{
		cout<<"ÐÕÃû"<<(**t).name<<"ÄêÁä"<<(*t)->age<<endl;
	}

	
}


void test02()
{
	vector<vector<int>> v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v6;
	vector<int> v5;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
		
		v6.push_back(i + 6);
	}
	v5.push_back(5);

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);
	v.push_back(v6);

	for (vector<vector<int>>::iterator t = v.begin(); t < v.end(); t++)
	{
		for (vector<int>::iterator t2 =(*t).begin() ;t2<(*t).end(); t2++)
		{
			cout << *t2 << "  ";
		}
		cout << endl;
	}
}


int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}