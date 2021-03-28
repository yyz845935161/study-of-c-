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

//创建人
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);

		//将对象放入容器中

		v.push_back(p);
	}
}

//打分
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

		//排序
			sort(d.begin(), d.end());

		//去除最高和最低分
			d.pop_back();
			d.pop_front();

		//平均分
			int sum = 0;
			for (deque<int>::iterator it = d.begin(); it < d.end(); it++)
			{
				sum += *it;
			}

			int avg = sum / d.size();
		//把平均分赋值到选手上
			it->score = avg;
	}
}

//打印
void printPerson(vector<Person>& v)
{
	for (vector<Person>::iterator it =v.begin(); it < v.end(); it++)
	{
		cout << "姓名" << (*it).name << "\t得分" << (*it).score << endl;
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

void test02()
{
	vector<Person> v;
	createPerson(v);
	cout << "test02姓名" << v.begin()->name<<(*v.begin()).name;
}
int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	test02();
}

struct ListNode* middleNode(struct ListNode* head) {
	struct ListNode* fast = head->next;
	struct ListNode* slow = head;

	while (fast)
	{
		slow = slow->next;
		if (fast->next)
		{
			fast = fast->next->next;
		}
		else
		{
			fast = fast->next;
		}
	}

	return slow;

}