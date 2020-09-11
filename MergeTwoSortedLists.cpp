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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* sol = NULL;
        if(l1==NULL && l2==NULL) return sol;
        vector<int> v;
        while(l1!=NULL){
            v.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2!=NULL){
            v.push_back(l2->val);
            l2 = l2->next;
        }
        
        sort(v.begin(),v.end());
        sol = new ListNode(v[0]);
        ListNode* temp = sol;
        for(int i = 1;i<v.size();i++){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        
        return sol;
    }
};
