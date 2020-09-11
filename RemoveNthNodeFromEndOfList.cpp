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
        if(head==NULL) return head;
        ListNode* temp = head;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp = temp->next;
        }
        temp = head;
        n = n%c;
        int k = c-n;
        if(k==c){
            head = temp->next;
            return head;
        }
        k--;
        while(k>0){
            temp = temp->next;
            k--;
        }
        if(temp->next->next) temp->next = temp->next = temp->next->next;
        else temp->next = NULL;
        
        
        return head;
    }
};
