#include<iostream>
using namespace std;
#include<list>
#include <algorithm>
class Person
{
	
public:
	string name;
	int age;
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};

void myPrint(Person p)
{
	cout << "����:" << p.name << "   ����:" << p.age << endl;
}

bool myConpare(Person p1,Person p2)
{
	return p1.age < p2.age;
}

class myCompareClass
{
public:
	bool operator()(Person p1, Person p2)
	{
		return p1.age > p2.age;
	}
};

void test01()
{
	Person p1("С��",23);
	Person p2("С���", 21);
	Person p3("����", 17);
	Person p4("����", 22);
	Person p5("�ְ�", 40);
	

	list<Person>L;
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	for (list<Person>::iterator it = L.begin(); it !=L.end(); it++)
	{
		cout << "����:" << it->name << "   ����:" << it->age<<endl;
	}
	cout << endl;

	cout << "�����" << endl;
	L.sort(myConpare);
	for_each(L.begin(), L.end(), myPrint);

	cout << endl;

	cout << "�º��������" << endl;
	L.sort(myCompareClass());
	for_each(L.begin(), L.end(), myPrint);
}



int main()
{
	test01();
}