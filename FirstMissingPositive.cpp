class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] > 0) s.insert(nums[i]);
        }
        auto it = s.begin();
        if(*it != 1) return 1;
        else{
            int x = *it;
            it++;
            for(;it!=s.end();it++){
                if(x+1!=*it) return x+1;
                x = *it;
            }
        }
        
        
        return *it  + 1;
    }
};
