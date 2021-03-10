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

using namespace std;
#include <stdio.h>
int main()
{

    int l;
    int h;
    int m;
    scanf("%d:%d %d", &h, &m, &l);
    m = (m + l % 60);
    h = (h + l / 60);
    h = (m >= 60 ? h + 1 : h);
    printf("%02d:%02d", h % 24, m % 60);




    return 0;
}


using namespace std;
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    printf("%d", (n / 12) * 4 + 2);





    return 0;
}


using namespace std;
#include <stdio.h>
int main()
{

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


    long n, m, temp = 1;
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