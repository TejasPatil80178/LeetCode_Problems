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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > v;
        if(root == NULL) return v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> a;
            queue<TreeNode* > qt;
            while(!q.empty()){
                TreeNode* p = q.front();
                q.pop();
                a.push_back(p->val);
                if(p->left) qt.push(p->left);
                if(p->right) qt.push(p->right);
            }
            v.push_back(a);
            q = qt;
        }
        
        return v;
    }
};
