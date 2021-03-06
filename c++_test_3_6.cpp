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
		cout << "安全性" << M_safe << endl;
	}

private:
	static string M_safe;
};

string Man::M_sex = "nan";
string Man::M_safe ="安全";

void test1()
{
	Man A("张三", 18);
	cout << "张三的性别" << A.M_sex<<endl;
	A.coutSafe();
}


int main()
{
	test1();
	system("pause");
	return 0;
		 
}


#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << (a + b - c) * d;
	system("pause");
	return 0;
}


#include <iostream>
using namespace std;


int main()
{
	int a;
	cin >> a;

	if (a % 5 == 0)cout << "YES";
	else cout << "NO";

	system("pause");
	return 0;
}