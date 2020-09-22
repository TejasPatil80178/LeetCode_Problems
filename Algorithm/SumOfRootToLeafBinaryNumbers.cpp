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
    int num = 0;
    
    int sumRootToLeaf(TreeNode* root) {
        trav(root,0);
        return num;
    }
    
    void trav(TreeNode* r,int curr){
        if(r!=NULL){
            curr = (curr<<1 | r->val);
            if(r->left == NULL && r->right == NULL){
                num+=curr;
                return;
            }
            trav(r->left,curr);
            trav(r->right,curr);
        }
        else return;
    }
    
    
};
