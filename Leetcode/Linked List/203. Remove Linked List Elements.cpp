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
    ListNode* removeElements(ListNode* head, int val) {
       ListNode* dummy = new ListNode(0,head);
        ListNode* temp=dummy;
        while(temp->next!=NULL)
        {
            if(temp->next->val==val)
            {
                ListNode* del=temp->next;
                temp->next=del->next;
                delete del;
            }
            else temp=temp->next;
        }
        if(temp!=NULL&&temp->val==val) delete temp;
        ListNode* result=dummy->next;
        return result;
    }
    
};
