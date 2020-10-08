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
    int findBottomLeftValue(TreeNode* root) {
        int c = root->val;
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty()){
            c = q.front()->val;
            queue<TreeNode* > q1;
            while(!q.empty()){
                TreeNode* p = q.front();
                q.pop();
                if(p->left) q1.push(p->left);
                if(p->right) q1.push(p->right);
            }
            q = q1;
        }
        
        return c;
    }
};
