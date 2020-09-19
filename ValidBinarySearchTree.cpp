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
    bool isValidBST(TreeNode* root) {
        in_traverse(root);
        vector<int> v = dp;
        sort(v.begin(),v.end());
        
        for(int i = 1;i<v.size();i++){
            if(v[i]==v[i-1]) return 0;
        }
        if(v==dp) return 1;
        else return 0;
    }
    
    void in_traverse(TreeNode* root){
        if(root == NULL) return;
        
        in_traverse(root->left);
        dp.push_back(root->val);
        in_traverse(root->right);
    } 
};
