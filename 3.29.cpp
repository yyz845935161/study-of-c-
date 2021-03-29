#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>

#include<vector>
#include<deque>
#include<set>
using namespace std;

class Person
{
public:
	string name;
	int age;
	int hight;

	Person(string name, int age, int hight)
	{
		this->name = name;
		this->age = age;
		this->hight = hight;
	}
};

void myprint(const list<Person>& L)
{
	for (list<Person>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout <<"身高： " <<it->name << "  年龄： " << it->age << "  身高： " << it->hight<<endl;
	}
}

void myprint(const set<Person>& L)
{
	for (set<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "身高： " << it->name << "  年龄： " << it->age << "  身高： " << it->hight << endl;
	}
}


//指定排序规则
bool comparePerson(Person& p1,Person& p2)
{
	//按照年龄 升序
	return p1.age < p2.age;
}
void test01()
{
	list<Person>L;

	//数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);


	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	myprint(L);

	cout << "排序后的：" << endl;
	L.sort(comparePerson);
	myprint(L);


}

void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(160);
	v.push_back(70);
	v.push_back(20);
	v.push_back(10);
	v.insert(v.begin(), 10);
	

	//v.count();//没有
}


void test03()
{
	deque<int >d;
	d.push_back(10);
	
}

void test04()
{
	set<Person>s;
	//数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	s.insert(p1);
	myprint(s);
}

int main()
{
	//test01();
	test04();
	return 0;
}