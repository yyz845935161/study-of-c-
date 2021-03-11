#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int n;
//    int sum = 0;
//    int num;
//    int arr[100];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    scanf("%d", &num);
//    for (int i = 0; i < n; i++)
//    {
//        if (num == arr[i])sum++;
//    }
//
//    printf("%d", sum);
//    return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//    int arr[4];
//    int i = 0;
//    float sum = 0;
//    while (i < 4)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    printf("%.1f", arr[0] * 0.2 + arr[1] * 0.1 + arr[2] * 0.2 + arr[3] * 0.5);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        printf("Happy new year!Good luck!\n");
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = (a > b ? a : b);
//    printf("%d", (max > c) ? max : c);
//}


//#include<stdio.h>
//    bool Is_z(int x)
//    {
//        for (int i = 2; i < x; i++)
//        {
//            if (x % i == 0)return 1;
//        }
//        return 0;
//    }
//
//    int main()
//    {
//        int sum = 0;
//        for (int i = 100; i < 1000; i++)
//        {
//            if (Is_z(i) == 1)sum++;
//        }
//
//        printf("%d", sum);
//    }
//
//
//#include<stdio.h>
//
//
//    int main()
//    {
//        int arr[1001] = { 0 };
//        int n;
//        int temp = 0;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &temp);
//            arr[temp] = temp;
//        }
//
//        for (int i = 0; i <= 1000; i++)
//        {
//            if (arr[i] != 0)printf("%d ", arr[i]);
//        }
//
//    }
//
//#include<stdio.h>
//
//
//    int main()
//    {
//        int arr[10][10];
//        int n;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//                scanf("%d", &arr[i][j]);
//        }
//
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//                if (arr[i][j] != 0)
//                {
//                    printf("NO");
//                    return 0;
//                }
//        }
//
//        printf("YES");
//
//    }


#include<stdio.h>
#include<stdlib.h>


typedef struct LinkNode
{
    int data;
    struct LinkNode* next;
}LNode, * LinkList;



int main()
{
    int n = 0;
    scanf("%d", &n);
    LNode* Tail = NULL;
    //头指针
    LNode* Head = (LinkList)malloc(sizeof(LNode));
    Head->next = NULL;
    Tail = Head;

    //初始化链表
    for (int i = 0; i < n; i++)
    {
        Tail->next = (LNode*)malloc(sizeof(LNode));
        Tail = Tail->next;
        scanf("%d", &Tail->data);
        Tail->next = NULL;
    }

    //删除
    int del;
    scanf("%d", &del);
    LNode* temp = Head;
    while (temp->next)
    {
        if (temp->next->data == del)
        {
            LNode* p = temp->next;
            temp->next = temp->next->next;
            
            free(p);
        }
        else temp = temp->next;
    }


    //打印
    temp = Head->next;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

}