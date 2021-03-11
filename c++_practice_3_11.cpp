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



//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    LNode* Tail = NULL;
//    //头指针
//    LNode* Head = (LinkList)malloc(sizeof(LNode));
//    Head->next = NULL;
//    Tail = Head;
//
//    //初始化链表
//    for (int i = 0; i < n; i++)
//    {
//        Tail->next = (LNode*)malloc(sizeof(LNode));
//        Tail = Tail->next;
//        scanf("%d", &Tail->data);
//        Tail->next = NULL;
//        sum++;
//    }
//
//    //删除
//    int del;
//    scanf("%d", &del);
//    LNode* temp = Head;
//    while (temp->next)
//    {
//        if (temp->next->data == del)
//        {
//            LNode* p = temp->next;
//            temp->next = temp->next->next;
//
//            free(p);
//            sum--;
//        }
//        else temp = temp->next;
//    }
//
//
//    printf("%d\n", sum);
//    //打印
//    temp = Head->next;
//    while (temp)
//    {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//
//}

int main()
{
    LNode* p = NULL;
    while (p)
    {
        printf("这是空指针的next");
    }
    return 0;
}


#include <stdio.h>

class TDate
{
public:
    int Year;
    int Month;
    int Day;

    TDate(int x = 0, int y = 0, int z = 0)
    {
        Year = x;
        Month = y;
        Day = z;
    }

};

//int main()
//{
//    int x, y, z;
//    scanf("%d %d %d", &x, &y, &z);
//    TDate test(x, y, z);
//    printf("%d/%d/%d", test.Day, test.Month, test.Year);
//    return 0;
//}

#include <stdio.h>
#define pai 3.14
class shape
{
public:
    virtual double GetArea() = 0;

private:
    int x;
    int y;

};

class Rectangle :public shape
{
public:
    int x;//长
    int y;//宽
    virtual double GetArea()
    {
        return x * y;
    }

};

class Square :public Rectangle
{
public:
    int a;
    double GetArea()
    {
        return a * a;
    }

};

class Circle :public shape
{
public:
    int r;
    double GetArea()
    {
        return pai * r * r;
    }

};

void test()
{
    int x, y, a, r;
    Rectangle rect;
    Square squ;
    Circle cir;
    scanf("%d %d", &rect.x, &rect.y);
    //rect.x=x;
    //rect.y=y;
    scanf("%d", &cir.r);
    //cir.r=r;
    scanf("%d", &squ.a);
    printf("%.0lf\n", rect.GetArea());
    printf("%g\n", cir.GetArea());
    printf("%.0lf\n", squ.GetArea());
}


int main()
{

    test();
    return 0;
}