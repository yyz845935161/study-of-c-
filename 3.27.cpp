#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <deque>

//void myprint(deque<int>& d)
//{
//	for (deque<int>::iterator it=d.begin();it<d.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	myprint(d1);
//	for (int i = -1; i > -10; i--)
//	{
//		d1.push_front(i);
//	}
//	myprint(d1);
//
//	cout << "Ê¹ÓÃfront·ÃÎÊ" << d1.front()+2 << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



struct ListNode {
    int val;
    struct ListNode* next;
};




struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));
    phead->next = head;
    struct ListNode* frontp = head;
    struct ListNode* bebind = phead;
    while (frontp)
    {
        if (frontp->val == val)
        {
            bebind->next = frontp->next;
            free(frontp);
            frontp = bebind->next;
        }
        else
        {
            frontp = frontp->next;
            bebind = bebind->next;
        }
    }

    return phead->next;
}