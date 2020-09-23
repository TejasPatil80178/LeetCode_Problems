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
    bool isUnivalTree(TreeNode* root) {
        int x = root->val;
        return comp(root,x);
    }
    
    bool comp(TreeNode* r,int x){
        if(r==NULL) return 1;
        if(r->val!= x) return 0;
        
        return (comp(r->left,x) && comp(r->right,x));
    }
};
