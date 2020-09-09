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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sol = new ListNode(0);
        ListNode* temp = sol;
        int x = 0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL) x+=(l1->val);
            if(l2!=NULL) x+=(l2->val);
            if(x>9){
                temp->next = new ListNode(x%10);
                temp = temp->next;
                x = (x/10);
            }
            else{
                temp->next = new ListNode(x);
                temp = temp->next;
                x = 0;
            }
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        if(x>0){
            temp->next = new ListNode(x);
        }
        return sol->next;
        
    }
};
