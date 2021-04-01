#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

//#include<iomanip>
//using namespace std;
//class Circle
//{
//private:
//	int R;
//public:
//	void Get(int r)
//	{
//		R = r;
//	}
//	double price1()
//	{
//		double sum1 = 0.0;
//		double pi = 3.14;
//		sum1 = 2 * pi * (R + 3) * 35;
//		return sum1;
//	}
//	double price2()
//	{
//		double sum2 = 0.0;
//		double pi = 3.14;
//		sum2 = pi * (R + 3) * (R + 3) * 20 - pi * R * R * 20;
//		return sum2;
//	}
//};
//int main()
//{
//	Circle C;
//	int r;
//	cin >> r;
//	C.Get(r);
//	cout << setprecision(2) << fixed << C.price2()
//		<< " " << setprecision(2) << fixed << C.price1() << endl;
//	return 0;
//}

void print01(int val)

{
	cout << val<<" ";

}

class class_print01
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class class_re_transfrom
{
public:
	int operator()(int val)
	{
		return -val;
	}
};

int re_transfrom(int val)
{
	return -val;
}

//常用遍历算法
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(1);

	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), class_print01());
	cout << endl;
	//for_each()

	//for_each(v.begin(),v.end(),)

	vector<int>newV;
	newV.resize(v.size());
	//transform(v.begin(), v.end(), newV.begin(), class_re_transfrom());
	transform(v.begin(), v.end(), newV.begin(), re_transfrom);
	for_each(newV.begin(), newV.end(), print01);
}


class Person
{
public:
	string name;
	int age;
	Person(string name,int age)
	{
		this->name = name;
		this->age = age;
	}
};


bool PersonCompare(const Person& p)
{
	if (p.age > 25)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void test02()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), PersonCompare);

	for (; it != v.end(); it= find_if(++it, v.end(), PersonCompare))
	{
		cout << "找到了" << "  名字:" << it->name << "  年龄:" << it->age << endl;
	}

	//if (it != v.end())
	//{
	//	cout << "找到了" << "  名字:" << it->name << "  年龄:" << it->age << endl;
	//}
	//else
	//{
	//	cout << "没找到" << endl;
	//}

}



int main()
{
	test02();
	//test01();
	system("pause");
	return 0;
}