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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 1;
        
        return iss(root->left,root->right);
    }
    
    bool iss(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return 1;
        else if(p==NULL || q==NULL) return 0;
        
        if(p->val != q->val) return 0;
        
        return (iss(p->left,q->right) && iss(p->right,q->left));
    } 
};
