#include <iostream>
using namespace std;
#include<map>
#include <vector>



//template<class t1,class t2>
void myprint(map<int, int>&m)
{
	for (map<int,int>::const_iterator it = m.begin();it!=m.end(); it++)
	{
		cout <<"key:"<< it->first <<"   value:"<<(*it).second<< endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m1;

	m1.insert(pair<int, int>(1, 90));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3,68));

	myprint(m1);
}

//bool map_insert(const map<int,int>&m)
//{
//	return 
//}

class map_insert
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

class map_insert3
{
public:
	/*bool operator()(map<int, int>m1, map<int, int>m2)const
	{
		return (m1.begin()->second) > (m2.begin()->second);
	}*/
	bool operator()(int v1,int v2)const
	{
		return v1 > v2;
	}
};

void myprint2(map<int, int, map_insert>& m)
{
	for (map<int, int, map_insert>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "   value:" << (*it).second << endl;
	}
	cout << endl;
}

void myprint3(map<int, int, map_insert3>& m)
{
	for (map<int, int, map_insert3>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "   value:" << (*it).second << endl;
	}
	cout << endl;
}
void test02()
{
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(9, 10));
	m.insert(make_pair(3, 50));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(8, 5));

	myprint(m);

	cout << "排序后:" << endl;
	map<int, int, map_insert>m2;
	m2.insert(make_pair(1, 10));
	m2.insert(make_pair(9, 10));
	m2.insert(make_pair(3, 50));
	m2.insert(make_pair(2, 20));
	m2.insert(make_pair(8, 5));
	myprint2(m2);


	cout << "第二位置排序后:" << endl;
	map<int, int, map_insert3>m3;
	m3.insert(make_pair(1, 10));
	m3.insert(make_pair(9, 10));
	m3.insert(make_pair(3, 50));
	m3.insert(make_pair(2, 20));
	m3.insert(make_pair(8, 5));
	myprint3(m3);
	

}

class Worker
{
public:
	string name;
	int salary;
	Worker(string name, int s)
	{
		this->name = name;
		this->salary = s;
	}
};

void creatWoker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker("员工"+nameSeed[i],rand()&10000+10000);
		v.push_back(worker);

	}
}

void


void test()
{
	vector<Worker>v_Worker;

}

int main()
{
	//test01();
	//test02();
	return  0;
}