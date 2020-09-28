/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> a,b;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        a.clear();
        b.clear();
        leaf(root1,0);
        leaf(root2,1);
        if(a==b) return 1;
        else return 0;
    }
    
    void leaf(TreeNode* r,int k){
        if(r==NULL) return;
        
        leaf(r->left,k);
        if(r->left==NULL && r->right==NULL){
            if(k) a.push_back(r->val);
            else b.push_back(r->val);
        } 
        leaf(r->right,k);
    }
};
