#include <iostream>
using namespace std;
#include <deque>
#include <vector>
#include<algorithm>
#include <ctime>

class Person
{
public:
	string name;
	int score;
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
};

//������
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);

		//���������������

		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++)
	{
		deque<int> d;
			for (int i = 0; i < 10; i++)
			{
				int score = rand() % 41 + 60;
				d.push_back(score);
			}

		//����
			sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ�
			d.pop_back();
			d.pop_front();

		//ƽ����
			int sum = 0;
			for (deque<int>::iterator it = d.begin(); it < d.end(); it++)
			{
				sum += *it;
			}

			int avg = sum / d.size();
		//��ƽ���ָ�ֵ��ѡ����
			it->score = avg;
	}
}

//��ӡ
void printPerson(vector<Person>& v)
{
	for (vector<Person>::iterator it =v.begin(); it < v.end(); it++)
	{
		cout << "����" << (*it).name << "\t�÷�" << (*it).score << endl;
	}
}

void test01()
{
	vector<Person> v;
	createPerson(v);
	printPerson(v);
	setScore(v);
	printPerson(v);
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
}