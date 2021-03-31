#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
#include<functional>

class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};


void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());

	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout <<"找到了" <<*it << endl ;
	}
}

class mycompare
{
public:
	mycompare()
	{
		cout << "无参构造" << endl;
	}
	bool operator()(int a,int b)
	{
		cout << "调用了此函数" << endl;
		return a > b;
	}
};


void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);

	myPrint(v);

	//降序排序
	sort(v.begin(), v.end(),mycompare());

	myPrint(v);


	//cout << endl;
	//mycompare a;
	//cout << a(3, 5) << endl;

	//mycompare();


	cout << endl;
}

void test03()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it !=v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;


	vector<bool>v2;

	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}


int main()
{
	//mycompare();
	//test02();
	//test01();

	test03();
	return 0;
}