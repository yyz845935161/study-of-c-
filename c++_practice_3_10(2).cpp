#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
//int main()
//{
//    printf("Practice makes perfect!\n");
//}
//#include<stdio.h>
//int main()
//{
//    double a, b, c;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double sum, average;
//    sum = a + b + c;
//    average = sum / 3;
//    printf("%.2lf %.2lf", sum, average);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x, max = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        scanf("%d", &x);
//        if (x > max)
//        {
//            max = x;
//        }
//    }
//    printf("%d", max);
//}
//
//#include<stdio.h>
//int main()
//{
//    int a, b, c, sum, temp;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        sum = a + b + c;
//        temp = sum / 3;
//        if (temp >= 60) printf("NO\n");
//        if (temp < 60) printf("YES\n");
//    }
//    return 0;
//}
//
//#include  <stdio.h>
//int main()
//{
//    int s = 0;
//    scanf("%d", &s);
//    if (s <= 100 && s >= 90) {
//        printf("A\n");
//    }
//    else if (s <= 89 && s >= 80) {
//        printf("B\n");
//    }
//    else if (s <= 79 && s >= 70) {
//        printf("C\n");
//    }
//    else if (s <= 69 && s >= 60) {
//        printf("D\n");
//    }
//    else if (s > 100 || s < 0) {
//        printf("F\n");
//    }
//    else {
//        printf("E\n");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int x, a, b, c, av, n = 0;
//    scanf("%d", &x);
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        getchar();
//        if (a == 0 || b == 0 || c == 0) continue;
//        av = (a + b + c) / 3;
//        if (av < 60) n++;
//    }
//    printf("%d", n);
//}
//#include<stdio.h>
//
//int main()
//{
//    int a, i, temp, result = 0;
//    scanf("%d", &a);
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &temp);
//        if (temp > result)
//            result = temp;
//    }
//    printf("%d", result);
//    return 0;
//}
//
//
//#include<stdio.h>
//
//int main()
//{
//    int n;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int i = 1;
//        for (int j = 2; j <= n; j++)
//        {
//            i = j * i;
//        }
//        sum += i;
//        n--;
//
//    }
//
//    printf("%d", sum);
//    return 0;
//}


#include<stdio.h>

float Max3(int a, int b, int c)
{
    int max = a > b ? a : b;
    return max > c ? max : c;
}
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float m;
    m = Max3(a + b, b, c) / (Max3(a, b + c, c) + Max3(a, b, b + c));
    printf("%.2f", m);
    return 0;
}