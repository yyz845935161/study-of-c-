#include <iostream>
using namespace std;
#include <vector>

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it=v.begin();it<v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;
	v1.push_back(10);
	//cout << v1.begin() << endl;
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//
	printVector(v1);

	v1.insert(v1.begin() + 3, 3333333);
	printVector(v1);

	v1.insert( v1.begin()+1, 111111111);
	printVector(v1);
}

int main()
{
	test01();
}
