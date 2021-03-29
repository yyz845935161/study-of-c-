#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
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
		cout <<"��ߣ� " <<it->name << "  ���䣺 " << it->age << "  ��ߣ� " << it->hight<<endl;
	}
}


//ָ���������
bool comparePerson(Person& p1,Person& p2)
{
	//�������� ����
	return p1.age < p2.age;
}
void test01()
{
	list<Person>L;

	//����
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	myprint(L);

	cout << "�����ģ�" << endl;
	L.sort(comparePerson);
	myprint(L);


}

int main()
{
	test01();
	return 0;
}