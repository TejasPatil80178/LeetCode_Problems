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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* sol = NULL;
        if(lists.empty()) return sol;
        
        vector<int> v;
        int n = lists.size();
        for(int i = 0;i<n;i++){
            while(lists[i]!=NULL){
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        
        sort(v.begin(),v.end());
        if(v.empty()) return sol;
        
        sol = new ListNode(v[0]);
        ListNode* temp = sol;
        for(int i = 1;i<v.size();i++){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        
        return sol;
    }
};
