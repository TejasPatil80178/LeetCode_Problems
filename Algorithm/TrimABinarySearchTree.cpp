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
    TreeNode* nt = NULL;
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        preOrder(root,low,high);
        return nt;
        
    }
    void preOrder(TreeNode* r,int l,int h){
        if(r==NULL) return;
        
        if(r->val>=l && r->val<=h){
            nt = insert(nt,r->val);
        }
        preOrder(r->left,l,h);
        preOrder(r->right,l,h);
    }
    TreeNode* insert(TreeNode* t,int i){
        if(t == NULL){
            t = new TreeNode(i);
            return t;
        }
        
        if(i > t->val){
            t->right  = insert(t->right,i);
        }
        else if(i<t->val){
            t->left = insert(t->left,i);
        }
        
        return t;
    }
};
