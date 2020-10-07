class Solution {
public:
    vector<vector<int> > v;
    
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0) return v;
        vector<int> a;
        bt(0,a,nums);
        
        return v;
    }
    
    void bt(int start, vector<int>& a,vector<int>& nums){
        
        v.push_back(a);
        
        for(int i = start;i<nums.size();i++){
            a.push_back(nums[i]);
            bt(i+1,a,nums);
            a.erase(a.begin() + a.size() - 1);
        }
    }
};
