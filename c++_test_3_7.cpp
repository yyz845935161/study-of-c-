#include <iostream>
using namespace std;

class girlfriend;
class Person;


class Person
{
	friend class girlfriend;
	friend void girlfriend::visit1(Person* person);
	friend void goodGay(Person* person);
public:
	string name;
	long long tel;
	
	Person()
	{
		this->name = "��Ԫ��";
		this->tel = 15911223344;
		this->my_girl = "С��";
	}

private:
	string my_girl;
};

class girlfriend
{
public:
	string name;
	void visit1(Person *person)
	{
		cout << "�û������ڷ��ʣ� " << person->name << endl;
		cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
	}

	void visit2(Person* person)
	{
		cout << "�û������ڷ��ʣ� " << person->name << endl;
		//cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
	}
	girlfriend()
	{
		name = "Ů��";
	}

private:

};


void goodGay(Person *person)
{
	cout << "�û������ڷ��ʣ� " << person->name << endl;
	cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
}


////void test1()
////{
////	Person A;
////	goodGay(&A);
////}

void test02()
{
	Person A;
	girlfriend B;
	B.visit1(&A);
	B.visit2(&A);
}



int main()
{
	test02();
	system("pause");
	return 0;
}