#include <iostream>
using namespace std;

//template<typename T>
//void My_printf(T arr[], int length);
//
////�����㷨
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

//��ͨ����ģ��
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
	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��
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
	Person p1("����", 1);
	Person p2("����", 1);


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

//int main()
//{
//	/*test01();*/
//	//test02();
//	return 0;
//}


//class Solution {
//public:
//	int jumpFloorII(int number)
//	{
//
//		int* p = (int*)malloc(sizeof(int) * number);
//		p[0] = 1;
//		p[1] = 2;
//		for (int i = 2; i < number; i++)
//		{
//			p[i] = 0;
//			for (int j = 0; j < i; j++)
//			{
//				p[i] += p[j];
//			}
//			p[i]++;
//		}
//		return p[number - 1];
//
//	}
//};
//
//
//class Solution {
//public:
//	int rectCover(int number)
//	{
//		if (number < 1) return 0;
//		int x = 1;
//		int y = 2;
//		while (--number)
//		{
//			y = y + x;
//			x = y - x;
//		}
//		return x;
//	}
//};

//class Solution {
//public:
//	int  NumberOf1(int n)
//	{
//		int sum = 0;
//		if (n < 0)
//		{
//			n = -n;
//			n =
//				sum++;
//		}
//
//		while (n)
//		{
//			if (n % 2 == 1)sum++;
//			n /= 2;
//		}
//		return sum;
//	}
//};

int main()
{
	int n = -1;
	int x = -100;
	int y = 15;
	n = ~n;
	x = ~x;
	y = ~y;
	return 0;
}

class Solution {
public:
	int  NumberOf1(int n)
	{
		int sum = 0;
		int temp = n;
		while (n)
		{
			if (n < 0)
			{
				n = ~n;
			}
			if (n % 2 == 1)sum++;
			n /= 2;
		}
		if (temp < 0)
		{
			return 32 - sum;
		}
		return sum;
	}
};