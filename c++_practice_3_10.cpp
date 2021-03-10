#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//int main()
//{
//    int arr[30] = { 0 };
//    int n;
//    int temp = 1;
//    int temp2;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            //cout <<"    ";
//            if (j == 0 || j == i)
//            {
//                arr[0] = 1;
//                arr[i] = 1;
//                printf("%5d", arr[j]);
//                //cout << arr[j];
////                 if(i!=0&&j==0) cout <<"    ";
//            }
//            else
//            {
//                printf("%5d", temp + arr[j]);
//                //cout<<temp + arr[j];
//                temp2 = arr[j];
//                arr[j] = temp + arr[j];
//                temp = temp2;
//            }
//
//
//        }
//        cout << endl;
//    }
//
//    system("pause");
//    return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//char Iswin(char ch, char arr[][3])
//{
//    //ÐÐ
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == ch && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])return ch;
//    }
//    //ÁÐ
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[0][i] == ch && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])return ch;
//    }
//
//    if (arr[0][0] == ch && arr[1][1] == arr[2][2] && arr[0][0] == arr[1][1])return ch;
//    if (arr[2][0] == ch && arr[2][0] == arr[1][1] && arr[0][2] == arr[1][1])return ch;
//    return 0;
//
//}
//using namespace std;
//int main()
//{
//
//    char arr[3][3] = { 0 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    if (Iswin('K', arr) == 'K')
//    {
//        cout << "KiKi wins!";
//        return 0;
//    }
//
//    if (Iswin('B', arr) == 'B')
//    {
//        cout << "BoBo wins!";
//        return 0;
//    }
//    cout << "No winner!";
//    system("pause");
//    return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int main()
//{
//
//    int n;
//    int i=0;
//    int arr[50];
//    cin >> n;
//    while (n)
//    {
//        arr[i] = (n % 6);
//        n /= 6;
//        i++;
//    }
//    i--;
//    while (i>=0)
//    {
//        cout <<arr[i--];
//    }
//
//
//
//    system("pause");
//    return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//int main()
//{
//
//    int n;
//    long long  sum = 0;
//    cin >> n;
//    while (n)
//    {
//        sum += n;
//        n--;
//    }
//    cout << sum;
//
//    system("pause");
//    return 0;
//}
//

//using namespace std;
//#include <stdio.h>
//int main()
//{
//
//    int l;
//    int h;
//    int m;
//    scanf("%d:%d %d", &h, &m, &l);
//    m = (m + l % 60);
//    h = (h + l / 60);
//    h = (m >= 60 ? h + 1 : h);
//    printf("%02d:%02d", h % 24, m % 60);
//
//
//
//
//    return 0;
//}
//
//
//using namespace std;
//#include <stdio.h>
//int main()
//{
//
//    int n;
//    scanf("%d", &n);
//    printf("%d", (n / 12) * 4 + 2);
//
//
//
//
//
//    return 0;
//}
//
//
//using namespace std;
//#include <stdio.h>
//int main()
//{

    //     long long  n,m;
    //     long long  temp,min,max;
    //     long long  com_max,com_min;
    //     scanf("%ld %ld",&n,&m);
    //     max = n>m ? n:m;
    //     min = n<m ? n:m;
    //     while(min)
    //     {
    //         temp = max%min;
    //         max = min;
    //         min = temp;
    //     }
    //     com_min = max;
    //     com_max = (n*m)/com_min;
    //     printf("%ld",com_max+com_min);


 /*   long n, m, temp = 1;
    long max, min, com_max, com_min;
    scanf("%ld %ld", &n, &m);
    max = n > m ? n : m;
    min = n < m ? n : m;
    while (temp)
    {
        temp = max - min;
        if (temp > min)
        {
            max = temp;
        }
        else
        {

            max = min;
            min = temp;
        }


    }

    com_min = max;
    com_max = (n * m) / com_min;
    printf("%ld", com_max + com_min);


    return 0;
}


using namespace std;
#include <stdio.h>
int main()
{

    int n;
    int i = 1;
    int sum = 0;
    scanf("%d", &n);
    while (n)
    {
        if (n % 10 % 2 == 1)
        {
            sum += (i * 1);
        }
        i *= 10;
        n = n / 10;
    }
    printf("%d", sum);


    return 0;
}


using namespace std;
#include <stdio.h>
int main()
{

    int n;
    int i;
    int sum = 0;
    int arr[30];
    arr[0] = 1;
    arr[1] = 2;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }


    printf("%d", arr[i - 1]);


    return 0;
}*/


//using namespace std;
//#include <stdio.h>
//int main()
//{
//
//    //     int n;
//    //     int i, j;
//    //     int count = 0;
//
//    //     scanf("%d", &n);
//    //     int arr[n];
//
//        //Ì«¹ý¸´ÔÓ
//    //     for (i = 0; i < n; i++)
//    //     {
//    //         scanf("%d", &arr[i]);
//    //     }
//
//    //     for (i = 0; i < n - count; i++)
//    //     {
//    //         for (j = i + 1; j < n - i - count; j++)
//    //         {
//    //             if (arr[i] == arr[j])
//    //             {
//    //                 for (int k = j; k < n - count - 1; k++)
//    //                 {
//    //                     arr[k] = arr[k + 1];
//    //                 }
//    //                 count++;
//    //             }
//    //         }
//    //     }
//    //     n = n - count;
//    //     for (i = 0; i < n - 1; i++)
//    //     {
//    //         for (j = 0; j < n - i - 1; j++)
//    //         {
//    //             if (arr[j] > arr[j + 1])
//    //             {
//    //                 int temp = arr[j];
//    //                 arr[j] = arr[j + 1];
//    //                 arr[j + 1] = temp;
//    //             }
//    //         }
//    //     }
//
//    //     for (i = 0; i < n; i++)
//    //     {
//    //         printf("%d ", arr[i]);
//    //     }
//    int n;
//    scanf("%d", &n);
//    int a[10000], k;
//
//    for (int i = 0; i < n; i++) {
//        a[i] = 0;
//    }
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &k);
//        a[k - 1] = k;
//    }
//
//
//    for (int i = 0; i < n; i++) {
//        if (a[i] != 0)
//            printf("%d ", a[i]);
//    }
//
//    return 0;
//}
//
//using namespace std;
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[8000] = { 0 };
//    int sum = 0;
//    const char* p2 = "CHN";
//    scanf("%s", arr);
//
//    for (int i = 0; i < strlen(arr); i++)
//    {
//        if (arr[i] == *p2)
//        {
//            for (int j = 1; j <3; j++)
//            {
//                if (arr[i+j]!=*(p2+j))
//                {
//                    break;
//                }
//                if(j==2)
//                {
//                    sum++;
//                }
//            }
//        }
//    }
//    printf("%d", sum);
//    
//
//   // printf("%s", arr);
//
// /*   for (int i = 0; i < strlen(arr); i++)
//    {
//        if()
//    }*/
//
//    return 0;
//}
//

using namespace std;
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[8000] = { 0 };
    int sum = 0;
    const char* p2 = "CHN";
    scanf("%s", arr);
    int length = strlen(arr);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 'C')
        {
            for (int j = i + 1; j < length; j++)
            {
                if (arr[j] == 'H')
                {
                    for (int k = j + 1; k < length; k++)
                    {
                        if (arr[k] == 'N')sum++;
                    }
                }
            }
        }
    }

    //     for (int i = 0; i < strlen(arr); i++)
    //     {
    //         if (arr[i] == *p2)
    //         {
    //             for (int j = 1; j <3; j++)
    //             {
    //                 if (arr[i+j]!=*(p2+j))
    //                 {
    //                     break;
    //                 }
    //                 if(j==2)
    //                 {
    //                     sum++;
    //                 }
    //             }
    //         }
    //     }
    printf("%d", sum);


    return 0;
}


using namespace std;
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[8000] = { 0 };
    long  sum = 0;
    long  x = 0;
    long  y = 0;
    const char* p2 = "CHN";
    scanf("%s", arr);
    int length = strlen(arr);

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 'C')x++;
        else if (arr[i] == 'H')y += x;
        else if (arr[i] == 'N')sum += y;
    }

    printf("%ld", sum);


    return 0;
}