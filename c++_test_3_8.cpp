#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//class father
//{
//public:
//	father()
//	{
//		cout << "����father�Ĺ��캯��" << endl;
//	}
//	~father()
//	{
//		cout << "����father����������" << endl;
//	}
//
//};
//
//
//class son: public father
//{
//public:
//	son()
//	{
//		cout << "����son�Ĺ��캯��" << endl;
//	}
//	~son()
//	{
//		cout << "����son����������" << endl;
//	}
//
//};
//
//
//void test()
//{
//	son a;
//}
//
//int main()
//{
//	//test();
//
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{

    int arr[50] = { 0 };
    int temp[50] = { 0 };
    int n;
    int num = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x = 1;
        for (int j = 0; j < num; j++)
        {
            if (temp[j] == arr[i])
            {
                x = 0;
            }
        }

        if (x == 1)
        {
            temp[num] = arr[i];
            num++;
        }

    }

    for (int i = 0; i < num; i++)
    {
        cout << temp[i] << " ";
    }
    system("pause");
    return 0;
}