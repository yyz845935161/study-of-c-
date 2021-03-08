//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////class father
////{
////public:
////	father()
////	{
////		cout << "这是father的构造函数" << endl;
////	}
////	~father()
////	{
////		cout << "这是father的析构函数" << endl;
////	}
////
////};
////
////
////class son: public father
////{
////public:
////	son()
////	{
////		cout << "这是son的构造函数" << endl;
////	}
////	~son()
////	{
////		cout << "这是son的析构函数" << endl;
////	}
////
////};
////
////
////void test()
////{
////	son a;
////}
////
////int main()
////{
////	//test();
////
////	system("pause");
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//
//    int arr[50] = { 0 };
//    int temp[50] = { 0 };
//    int n;
//    int num = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        int x = 1;
//        for (int j = 0; j < num; j++)
//        {
//            if (temp[j] == arr[i])
//            {
//                x = 0;
//            }
//        }
//
//        if (x == 1)
//        {
//            temp[num] = arr[i];
//            num++;
//        }
//
//    }
//
//    for (int i = 0; i < num; i++)
//    {
//        cout << temp[i] << " ";
//    }
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m;
//    int arr1[10] = { 0 };
//    int arr2[10] = { 0 };
//    int temp1 = 0;
//    int temp2 = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr1[i];
//    }
//    for (int i = 0; i < m; i++)
//    {
//        cin >> arr2[i];
//    }
//
//    for (int i = 0; i < n + m; i++)
//    {
//        if (arr1[temp1] < arr2[temp2])
//        {
//            cout << arr1[temp1] << " ";
//            temp1++;
//            if (temp1 == n)
//            {
//                for (; i < n + m - 1; i++)
//                {
//                    cout << arr2[temp2++] << " ";
//                }
//                break;
//            }
//        }
//        else
//        {
//            cout << arr2[temp2] << " ";
//            temp2++;
//            if (temp2 == m)
//            {
//                for (; i < n + m - 1; i++)
//                {
//                    cout << arr1[temp1++] << " ";
//                }
//                break;
//            }
//        }
//    }
//    system("pause");
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m;
//    float arr[5][6] = { 0 };
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            cin >> arr[i][j];
//            arr[i][5] += arr[i][j];
//            cout << arr[i][j] << " ";
//
//        }
//        cout << arr[i][5] << endl;
//
//    }
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m;
//    float arr[10][10] = { 0 };
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr[i][j];
//        }
//
//    }
//    cin >> n >> m;
//    cout << arr[n - 1][m - 1];
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m;
//    float arr[10][10] = { 0 };
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr[i][j];
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//
//    }
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, x, y;
//    float arr[10][10] = { 0 };
//    int temp = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr[i][j];
//            if (arr[i][j] > temp)
//            {
//                temp = arr[i][j];
//                x = i + 1;
//                y = j + 1;
//            }
//
//        }
//
//    }
//
//    cout << x << " " << y;
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, x, y;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int temp = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr1[i][j];
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr2[i][j];
//            if (arr2[i][j] == arr1[i][j])
//            {
//                temp++;
//            }
//        }
//    }
//
//    if (temp == n * m) cout << "Yes";
//    else cout << "No";
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, x, y;
//    int arr1[10][10] = { 0 };
//    int temp = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> arr1[i][j];
//        }
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (arr1[i][j] == 0)temp++;
//        }
//    }
//
//    if (temp == (n - 1) * n / 2) cout << "YES";
//    else cout << "NO";
//
//    system("pause");
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, m, x, y;
//    int arr1[10][10] = { 0 };
//    int temp = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr1[i][j];
//        }
//    }
//
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cout << arr1[j][i] << " ";
//        }
//        cout << endl;
//    }
//
//
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void In_arr(int arr[10][10], int n, int m)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            cin >> arr[n][m];
//        }
//    }
//}
//int main()
//{
//    int n, m, x, y;
//    int arr[10][10] = { 0 };
//    int temp = 0;
//    cin >> n >> m;
//
//    In_arr(arr, n, m);
//
//
//
//
//    system("pause");
//    return 0;
//}


#include <iostream>
using namespace std;

void In_arr(int arr[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
}

//行变换
void Line_sort(int arr[10][10], int x, int y, int m)
{
    for (int i = 0; i < m; i++)
    {
        int temp = arr[i][x - 1];
        arr[i][x - 1] = arr[i][y - 1];
        arr[i][y - 1] = temp;
    }
}
//列变换
void col_sort(int arr[10][10], int x, int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[x - 1][i];
        arr[x - 1][i] = arr[y - 1][i];
        arr[y - 1][i] = temp;
    }

}

void My_cin(int arr[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
int main()
{
    int n, m;
    int arr[10][10] = { 0 };
    int k;
    char ch;
    int x, y;
    cin >> n >> m;
    In_arr(arr, n, m);
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> ch >> x >> y;
        if (ch == 'c') Line_sort(arr, x, y, m);
        if (ch == 'r') col_sort(arr, x, y, n);
    }

    My_cin(arr, n, m);




    system("pause");
    return 0;
}