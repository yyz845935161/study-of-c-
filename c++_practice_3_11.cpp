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

#include <stdio.h>
int main()
{

    int arr[4];
    int i = 0;
    float sum = 0;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("%.1f", arr[0] * 0.2 + arr[1] * 0.1 + arr[2] * 0.2 + arr[3] * 0.5);
    return 0;
}

#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("Happy new year!Good luck!\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b ? a : b);
    printf("%d", (max > c) ? max : c);

}