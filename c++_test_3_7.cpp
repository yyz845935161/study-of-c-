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
//		this->name = "��Ԫ��";
//		this->tel = 15911223344;
//		this->my_girl = "С��";
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
//		cout << "�û������ڷ��ʣ� " << person->name << endl;
//		cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
//	}
//
//	void visit2(Person* person)
//	{
//		cout << "�û������ڷ��ʣ� " << person->name << endl;
//		//cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
//	}
//	girlfriend()
//	{
//		name = "Ů��";
//	}
//
//private:
//
//};
//
//
//void goodGay(Person *person)
//{
//	cout << "�û������ڷ��ʣ� " << person->name << endl;
//	cout << "�û������ڷ��ʣ� " << person->my_girl << endl;
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


#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    if (x > 0)cout << -1;
    else if (x == 0)cout << 0;
    else cout << 1;

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int i = 2019;
    int count = 0;
    while (i)
    {
        if (i % 10 == 9 || i / 10 % 10 == 9 || i / 100 % 10 == 9)
            count++;
        i--;
    }
    cout << count;
    system("pause");
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int jnum = 0;
    int onum = 0;
    int i;
    cin >> i;
    while (i)
    {
        if (i % 2 == 0)onum++;
        else jnum++;
        i--;
    }
    cout << jnum << " " << onum;
    system("pause");
    return 0;
}