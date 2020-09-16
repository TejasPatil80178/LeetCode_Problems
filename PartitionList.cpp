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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* temp = head;
        ListNode* ans = new ListNode(0);
        ListNode* p = ans;
        while(temp){
            if(temp->val < x){
                p->next = new ListNode(temp->val);
                p = p->next;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(temp->val >= x){
                p->next = new ListNode(temp->val);
                p = p->next;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};
