/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <math.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL)return 0;
        int num=0;
        int sum=0;
        ListNode* temp=head;
        while(temp)
        {
            num++;
            temp=temp->next;
        }
        temp=head;

        while(temp)
        {
            sum+=(temp->val)*pow(2,--num);
            temp=temp->next;
        }
        return sum;

    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* temp=head;
        while(temp->next)
        {
            if(temp->val==temp->next->val)
            {
                ListNode* del=temp->next;
                temp->next=del->next;
                delete del;

            }
            else
            {
                temp=temp->next;
            }
        }

        return head;

    }
};