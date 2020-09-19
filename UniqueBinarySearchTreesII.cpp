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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode* > vt;
        if(n==0) return vt;
        vector<int> v(n,0);
        map<vector<int>, TreeNode* > mp;
        
        for(int i = 0;i<n;i++){
            v[i] = i+1;
        }
        do{
            TreeNode* root = NULL;
            for(int i = 0;i<n;i++){
                root = insertbst(root,v[i]);
            }
            vector<int> a = inorderTraversal(root);
            mp[a] = root;
            
        }while(next_permutation(v.begin(),v.end()));
        
        for(auto it = mp.begin();it!=mp.end();it++){
            vt.push_back(it->second);
        }
        return vt;
    }
    
    TreeNode* insertbst(TreeNode* root,int data){
        if(root == NULL){
            root = new TreeNode(data);
        }
        else if(data > root->val){
            root->right = insertbst(root->right,data);
        }
        else{
            root->left = insertbst(root->left,data);
        }
        
        return root;
    }
    
    vector<int> dp;
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        vector<int> b = dp;
        dp.clear();
        return b;
    }
    
    void traverse(TreeNode* root){
        if(root == NULL) return;
        
        dp.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    
    
};
