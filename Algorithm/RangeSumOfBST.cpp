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
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        inorder(root);
        int n = dp.size();
        for(int i = 0;i<n;i++){
            if(dp[i]>=L && dp[i]<=R) sum+=dp[i];
        }
        dp.clear();
        
        return sum;
    }
    
    void inorder(TreeNode* r){
        if(r==NULL) return;
        
        inorder(r->left);
        dp.push_back(r->val);
        inorder(r->right);
    }
};
