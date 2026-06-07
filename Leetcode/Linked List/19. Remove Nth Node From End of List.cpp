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
        if(head==NULL)  return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        //Moving fast to n place ahead of slow
        for(int i=0;i<n;i++)
            fast=fast->next;
        //Edge case :removing the head
        if(fast==NULL)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        //Moving fast and slow until fast reaches the end
        while(fast->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        //Deleting the nth node, next to slow pointer
        ListNode* del=slow->next;
        slow->next=del->next;
        delete del;

        return head;
    }
};