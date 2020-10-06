class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int l, int r) {
        vector<int> sum(n,0);
        vector<int> v;
        sum[0] = nums[0];
        
        for(int i = 0;i<n;i++){
            if(i>0) sum[i] = sum[i-1] + nums[i];
            else sum[i] = nums[i];
            
            v.push_back(sum[i]);
        }
        
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                v.push_back(sum[j] - sum[i]);
            }
        }
        sort(v.begin(),v.end());
        int sol = 0;
        for(int i = l-1;i<r;i++){
            sol = (sol%1000000007) + (v[i]%1000000007);
        }
        return sol%1000000007;
    }
};
