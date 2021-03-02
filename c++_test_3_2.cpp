#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//int main()
//{	
//	int i = 100;
//	while (i<1000)
//	{
//		if ((i / 100) * (i / 100) * (i / 100) + (i / 10%10) * (i / 10%10) * (i / 10%10) + (i % 10) * (i % 10) * (i % 10) == i)
//			cout << i <<endl;
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//
//	for (int i = 1; i < 100;i++)
//	{
//		if (i / 10 == 7 || i % 10 == 7 || i % 7 == 0)
//			cout <<	i <<":ÇÃ×À×Ó"<<endl;
//	}
//	return 0;
//}

int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << "x" << i << "==" << i * j << "\t" ;
		}
		cout<<endl;
	}
	return 0;
}