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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        if(head==NULL || head->next == NULL) return head;
        
        
        int l = 0;
        ListNode* temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }
        k = k%l;
        if(k==0) return head;
        
        k = l-k;
        temp = head;
        ListNode* p = temp;
        while(k>1){
            p = p->next;
            k--;
        }
        head = p->next;
        p->next = NULL;
        p = head;
        while(p->next){
            p = p->next;
        }
        p->next = temp;
        return head;
    }
};
