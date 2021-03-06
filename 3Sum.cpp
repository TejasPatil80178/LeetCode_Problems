class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> >v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<3) return v;
        
        
        for(int i = 0;i<n-1;i++){
            if(i>0 && nums[i] == nums[i-1]) continue; //avoid duplicates
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum>0) r--;
                else if(sum < 0) l++;
                else{
                    v.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(l < r && nums[l]==nums[l-1]) l++;   //avoid duplicates
                    r--;
                    while(l < r && nums[r] == nums[r+1]) r--;   //avoid duplicates
                }
            }
        }
        
        return v;
    }
};
