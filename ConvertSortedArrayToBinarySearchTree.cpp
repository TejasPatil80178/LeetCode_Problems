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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return bt(nums,0,nums.size()-1);
    }
    
    TreeNode* bt(vector<int> v,int s,int e){
        if(s>e) return NULL;
        
        int mid = (s+e)/2;
        TreeNode* r = new TreeNode(v[mid]);
        
        if(s==e) return r;
        
        r->left = bt(v,s,mid-1);
        r->right = bt(v,mid+1,e);
        
        return r;
        
    }
};
