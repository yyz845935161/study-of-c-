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
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//test01();
//	test02();
//}

struct ListNode
{
	int val;
	struct ListNode* next;
};

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

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
	// write code here
	struct ListNode* fast = pListHead;
	struct ListNode* slow = pListHead;
	while (k)
	{
		k--;
		if (fast)
		{
			fast = fast->next;
		}
		else
		{
			return NULL;
		}
	}

	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (!l1)return l2;
	if (!l2)return l1;

	struct ListNode* newhead = NULL;
	struct ListNode* tail = NULL;
	if (l1->val > l2->val)
	{
		newhead = l2;
	}
	else
	{
		newhead = l1;
	}

	while (l1 && l2)
	{
		struct ListNode* temp = tail;
		if (l1->val > l2->val)
		{
			tail = l2;
			l2 = l2->next;
			if (temp)  temp->next = tail;
			tail->next = NULL;
		}
		else
		{
			tail = l1;
			l1 = l1->next;
			if (temp)  temp->next = tail;
			tail->next = NULL;
		}
	}

	if (!l1)
	{
		tail->next = l2;
	}
	else
	{
		tail->next = l1;
	}
	return newhead;
}



void test02()
{

}


