#include <iostream>
using namespace std;

//template<typename T>
//void My_printf(T arr[], int length);
//
////排序算法
//template<typename T>
//void My_sselect_sort(T arr[],int length)
//{
//	for (int i = 0; i < length-1; i++)
//	{
//		for (int j = i+1; j < length; j++)
//		{
//			if (arr[i]<arr[j])
//			{
//				T temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	My_printf<T>(arr, length);
//}
//
//template<typename T>
//void My_printf(T arr[], int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " " << endl;
//	}
//}
//
//
//int main()
//{
//	//int arr[] = { 5,4,2,8,9,1,10 };
//	
//	char arr[] = "abcdef";
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	My_sselect_sort<char>(arr, length);
//	return 0;
//}

class Person
{
public:
	string name;
	int id;
	Person(string name, int id)
	{
		this->name = name;
		this->id = id;
	}

};

//普通函数模板
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<>bool myCompare(Person& p1,Person& p2)
{

	if (p1.name == p2.name && p1.id == p2.id)
	{
		return true;
	}
	else
	{
		return false;
	}
}



void test01()
{
	int a = 10;
	int b = 20;
	//内置数据类型可以直接使用通用的函数模板
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a == b " << endl;
	}
	else
	{
		cout << "a != b " << endl;
	}
}

template<class T>bool
myCompare_Per(T& p1, T& p2)
{

	if (p1.name == p2.name && p1.id == p2.id)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test02()
{
	Person p1("张三", 1);
	Person p2("张三", 1);


	bool ret = myCompare_Per(p1, p2);
	if (ret)
	{
		cout << "p1 == p2 " << endl;
	}
	else
	{
		cout << "p1 != p2 " << endl;
	}

}

int main()
{
	/*test01();*/
	//test02();
	return 0;
}