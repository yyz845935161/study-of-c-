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

//�б任
void Line_sort(int arr[10][10], int x, int y, int m)
{
    for (int i = 0; i < m; i++)
    {
        int temp = arr[i][x - 1];
        arr[i][x - 1] = arr[i][y - 1];
        arr[i][y - 1] = temp;
    }
}
//�б任
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



#include <stdio.h>
int main()
{
    int m = 0;//��
    int n = 0;//��
    int arr[10][10] = { 0 };
    int cnt = 0;//�����Ĵ���
    char op = 0;//����������ַ�
    int a = 0;
    int b = 0;
    //��ȡ����
    scanf("%d%d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &cnt);
    for (i = 0; i < cnt; i++)
    {
        //��ȡ����ָ��
        //ע�ͽ��ͣ�
        //scanf("%d", &a);
        //scanf(" %c", &c); // ���� %d ������к�̿հ׷���Ȼ���һ�� char
        scanf(" %c %d %d", &op, &a, &b);
        //ִ�в���
        if (op == 'r')
        {
            //����a��b��
            for (j = 0; j < m; j++)
            {
                int tmp = arr[a - 1][j];
                arr[a - 1][j] = arr[b - 1][j];
                arr[b - 1][j] = tmp;
            }
        }
        else if (op == 'c')
        {
            //����a��b��
            for (j = 0; j < n; j++)
            {
                int tmp = arr[j][a - 1];
                arr[j][a - 1] = arr[j][b - 1];
                arr[j][b - 1] = tmp;
            }
        }
    }
    //���
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}