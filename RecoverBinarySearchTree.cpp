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
    vector<int> dp;
    TreeNode* f = NULL;
    TreeNode* s = NULL;
    void recoverTree(TreeNode* root) {
        trav(root);
        vector<int> v = dp;
        sort(v.begin(),v.end());
        int a = -1;
        int b = -1;
        for(int i= 0;i<v.size();i++){
            if(v[i]!=dp[i]){
                a = dp[i];
                b = v[i];
                break;
            }
        }
        
        valfind(root,a);
        valfind(root,b);
        swap(f->val,s->val);
        
    }
    
    void trav(TreeNode* root){
        if(root==NULL) return;
        
        trav(root->left);
        dp.push_back(root->val);
        trav(root->right);
    }
    
    void valfind(TreeNode* root,int data){
        if(root==NULL) return;
        
        valfind(root->left,data);
        if(root->val == data){
            if(f==NULL) f = root;
            else s = root;
        }
        valfind(root->right,data);
    }
};
