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

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int arr1[10] = { 0 };
    int arr2[10] = { 0 };
    int temp1 = 0;
    int temp2 = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        if (arr1[temp1] < arr2[temp2])
        {
            cout << arr1[temp1] << " ";
            temp1++;
            if (temp1 == n)
            {
                for (; i < n + m - 1; i++)
                {
                    cout << arr2[temp2++] << " ";
                }
                break;
            }
        }
        else
        {
            cout << arr2[temp2] << " ";
            temp2++;
            if (temp2 == m)
            {
                for (; i < n + m - 1; i++)
                {
                    cout << arr1[temp1++] << " ";
                }
                break;
            }
        }
    }
    system("pause");
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int n, m;
    float arr[5][6] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            arr[i][5] += arr[i][j];
            cout << arr[i][j] << " ";

        }
        cout << arr[i][5] << endl;

    }
    system("pause");
    return 0;
}