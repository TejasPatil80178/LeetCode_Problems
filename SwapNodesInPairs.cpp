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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = temp;
        while(curr->next && curr->next->next){
            ListNode* fnode = curr->next;
            ListNode* snode = curr->next->next;
            fnode->next = snode->next;
            snode->next = fnode;
            curr->next = snode;
            curr = curr->next->next;
        }
        
        return temp->next;
    }
};
