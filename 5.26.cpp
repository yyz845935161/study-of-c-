#include<iostream>
using namespace std;
#include<list>

template<class T1,class T2=char>
void test01(T1 a,T2 b)
{
	int c = a + b;
	cout << c << endl;
}

class Person {
public:
	Person(string name, int age, int height) {
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}

public:
	string m_Name;  //����
	int m_Age;      //����
	int m_Height;   //���
};

void myprint(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it !=L.end(); it++)
	{
		cout << "����:" << (*it).m_Name << "  ��ߣ�" << (*it).m_Height <<"  ����"<<(*it).m_Age << endl;
	}
}

class MyCompear
{
public:
	bool operator()(Person p1,Person p2)const
	{
		if (p1.m_Age == p2.m_Age)
		{
			return p1.m_Height < p2.m_Height;
		}
		return p1.m_Age < p2.m_Age;
	}
};

void test02()
{
	list<Person> L;

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
	cout << "û����Ľ����" << endl;
	myprint(L);
	cout << "�����" << endl;
	L.sort(MyCompear());
	myprint(L);
}




int main() {
	//test01<int>(15, 16);
	test02();
	system("pause");
	return 0;
}