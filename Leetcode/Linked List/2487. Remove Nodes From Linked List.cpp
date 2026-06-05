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
    ListNode* removeNodes(ListNode* head) {
        //Converting LL into array
        vector<ListNode*> vec;
        ListNode* temp=head;
        while(temp)
        {
            vec.push_back(temp);
            temp=temp->next;
        }
        //Traversing backward through the array
        ListNode* newHead=nullptr;
        int max=INT_MIN;
        for(int i=vec.size()-1;i>=0;i--)
        {
            if(vec[i]->val>=max)
            {
                max=vec[i]->val;
                vec[i]->next=newHead;
                newHead=vec[i];
            }
        }
        return newHead;
    }
};