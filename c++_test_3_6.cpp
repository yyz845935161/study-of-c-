#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

class Man
{
public:
	string M_name;
	int M_age;
	static string M_sex;

	Man(string name, int age) :M_name(name), M_age(age)
	{}
	
	void coutSafe()
	{
		cout << "��ȫ��" << M_safe << endl;
	}

private:
	static string M_safe;
};

string Man::M_sex = "nan";
string Man::M_safe ="��ȫ";

void test1()
{
	Man A("����", 18);
	cout << "�������Ա�" << A.M_sex<<endl;
	A.coutSafe();
}


int main()
{
	test1();
	system("pause");
	return 0;
		 
}