class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n,0);
        sum[0] = nums[0];
        for(int i = 1;i<n;i++){
            sum[i] = sum[i-1]+nums[i];
        }
        int m = INT_MAX;
        for(int i = 0;i<n;i++){
            if(sum[i] < 0){
                if(sum[i] < m){
                    m = sum[i];
                }
            }
        }
        if(m!=INT_MAX) return abs(m)+1;
        return 1;
    }
};
