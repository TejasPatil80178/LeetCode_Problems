class Solution {
public:
    int threeSumClosest(vector<int>& nums, int b) {
        sort(nums.begin(),nums.end());
        int m = INT_MAX;
        int k;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(abs(sum - b) < m){
                    m = abs(sum - b);
                    k = sum;
                }
                
                if(sum == b) return sum;
                else if(sum > b) r--;
                else l++;
                
            }
        }
        
        
        return k;
    }
};
