class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            if(sum<0){
                sum = 0;
            }
            else if(sum > m){
                m = sum;
            }
        }
        if(sum==0){
            m = max(m,*max_element(nums.begin(),nums.end()));
        }
        return m;
    }
};
