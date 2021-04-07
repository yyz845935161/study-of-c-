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
	cout << "ĞÕÃû:" << p.name << "   ÄêÁä:" << p.age << endl;
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
	Person p1("Ğ¡¶ş",23);
	Person p2("Ğ¡±ò±ò", 21);
	Person p3("Á¹Á¹", 17);
	Person p4("ÔüÔü", 22);
	Person p5("°Ö°Ö", 40);
	

	list<Person>L;
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	for (list<Person>::iterator it = L.begin(); it !=L.end(); it++)
	{
		cout << "ĞÕÃû:" << it->name << "   ÄêÁä:" << it->age<<endl;
	}
	cout << endl;

	cout << "ÅÅĞòºó" << endl;
	L.sort(myConpare);
	for_each(L.begin(), L.end(), myPrint);

	cout << endl;

	cout << "·Âº¯ÊıÅÅĞòºó" << endl;
	L.sort(myCompareClass());
	for_each(L.begin(), L.end(), myPrint);
}



int main()
{
	test01();
}