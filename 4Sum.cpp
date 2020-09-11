class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        if(n<4) return v;
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j = i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l = j+1;
                int r = n-1;
                while(l<r){
                    int sum = nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum > target) r--;
                    else if(sum<target) l++;
                    else{
                        v.push_back({nums[i] , nums[j] , nums[l] , nums[r]});
                        l++;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        r--;
                        while(l<r && nums[r] == nums[r+1]) r--; 
                    }
                }
            }
        }
        
        
        return v;
        
    }
};
