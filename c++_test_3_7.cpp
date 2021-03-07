#include <iostream>
using namespace std;

//class girlfriend;
//class Person;
//
//
//class Person
//{
//	friend class girlfriend;
//	friend void girlfriend::visit1(Person* person);
//	friend void goodGay(Person* person);
//public:
//	string name;
//	long long tel;
//	
//	Person()
//	{
//		this->name = "杨元樟";
//		this->tel = 15911223344;
//		this->my_girl = "小章";
//	}
//
//private:
//	string my_girl;
//};
//
//class girlfriend
//{
//public:
//	string name;
//	void visit1(Person *person)
//	{
//		cout << "好基友正在访问： " << person->name << endl;
//		cout << "好基友正在访问： " << person->my_girl << endl;
//	}
//
//	void visit2(Person* person)
//	{
//		cout << "好基友正在访问： " << person->name << endl;
//		//cout << "好基友正在访问： " << person->my_girl << endl;
//	}
//	girlfriend()
//	{
//		name = "女孩";
//	}
//
//private:
//
//};
//
//
//void goodGay(Person *person)
//{
//	cout << "好基友正在访问： " << person->name << endl;
//	cout << "好基友正在访问： " << person->my_girl << endl;
//}
//
//
//////void test1()
//////{
//////	Person A;
//////	goodGay(&A);
//////}
//
//void test02()
//{
//	Person A;
//	girlfriend B;
//	B.visit1(&A);
//	B.visit2(&A);
//}
//
//
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int x, y;
//    cin >> x;
//    if (x > 0)cout << -1;
//    else if (x == 0)cout << 0;
//    else cout << 1;
//
//    system("pause");
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int i = 2019;
//    int count = 0;
//    while (i)
//    {
//        if (i % 10 == 9 || i / 10 % 10 == 9 || i / 100 % 10 == 9)
//            count++;
//        i--;
//    }
//    cout << count;
//    system("pause");
//    return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int jnum = 0;
//    int onum = 0;
//    int i;
//    cin >> i;
//    while (i)
//    {
//        if (i % 2 == 0)onum++;
//        else jnum++;
//        i--;
//    }
//    cout << jnum << " " << onum;
//    system("pause");
//    return 0;
//}
//


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int n = 0;
//    int arr[50];
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    cin >> arr[n];
//    for (int i = 0; i < n + 1; i++)
//    {
//        for (int j = 0; j < n - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//
//        }
//    }
//
//    for (int i = 0; i <= n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//}


#include <iostream>
#include <string.h>
using namespace std;


int main()
{

    char  password[20];
    char password_again[20];
    cin >> password >> password_again;
    if (strcmp(password, password_again) == 0)
        cout << "same";
    else cout << "different";
    system("pause");
    return 0;
}


#include <iostream>
using namespace std;


int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }

    }
    cout << sum;

    system("pause");
    return 0;
}

