/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        ListNode* t=head;
        n=c-n;
        if(c<=1)
        return NULL;
        if(n==0)
        return head->next;
        while(t!=NULL)
        {
            n--;
            if(n==0)
            {t->next=t->next->next;break;}
        
            t=t->next;
        }
        return head;
    }
};
