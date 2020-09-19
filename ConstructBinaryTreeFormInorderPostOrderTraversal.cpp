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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int p = inorder.size()-1;
        return bt(inorder,postorder,0,p,p);
    }
    
    int search(vector<int>& in,int s,int e,int val){
        for(int i = s;i<=e;i++){
            if(in[i]==val) return i;
        }
        return 0;
    }
    
    TreeNode* bt(vector<int>& in,vector<int>& post,int s,int e,int& p){
        if(s>e) return NULL;
        
        TreeNode* r = new TreeNode(post[p--]);
        
        if(s==e) return r;
        
        int index = search(in,s,e,r->val);
        r->right = bt(in,post,index+1,e,p);
        r->left = bt(in,post,s,index-1,p);
        
        return r;
    }
};
