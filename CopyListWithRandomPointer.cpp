/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* l = head;
        Node* c = NULL;
        map<Node*,Node*> mp;
        while(l!=NULL){
            c = new Node(l->val);
            mp[l] = c;
            l = l->next;
        }
        l = head;
        while(l!=NULL){
            c = mp[l];
            c->next = mp[l->next];
            c->random = mp[l->random];
            c = c->next;
            l = l->next;
        }
        return mp[head];
    }
};
