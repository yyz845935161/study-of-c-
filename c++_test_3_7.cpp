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
		this->name = "杨元樟";
		this->tel = 15911223344;
		this->my_girl = "小章";
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
		cout << "好基友正在访问： " << person->name << endl;
		cout << "好基友正在访问： " << person->my_girl << endl;
	}

	void visit2(Person* person)
	{
		cout << "好基友正在访问： " << person->name << endl;
		//cout << "好基友正在访问： " << person->my_girl << endl;
	}
	girlfriend()
	{
		name = "女孩";
	}

private:

};


void goodGay(Person *person)
{
	cout << "好基友正在访问： " << person->name << endl;
	cout << "好基友正在访问： " << person->my_girl << endl;
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