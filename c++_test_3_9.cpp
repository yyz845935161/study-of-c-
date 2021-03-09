#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
    int arr[30] = { 0 };
    int n;
    int temp = 1;
    int temp2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[0] = 1;
                arr[i] = 1;
                cout << arr[j];
            }
            else
            {

                cout << temp + arr[j];
                temp2 = arr[j];
                arr[j] = temp + arr[j];
                temp = temp2;
            }
            cout << "    ";

        }
        cout << endl;
    }

    system("pause");
    return 0;
}


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[30][30];
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
                printf("%5d", 1);
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                printf("%5d", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}