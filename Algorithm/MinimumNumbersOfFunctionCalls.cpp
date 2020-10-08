class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        int m = 0;
        for(int i = 0;i<n;i++){
            int k = 0;
            while(nums[i]!=0){
                if(nums[i]%2==0){
                    nums[i]/=2;
                    k++;
                }
                else{
                    nums[i]-=1;
                    c++;
                }
                
            }
            m = max(m,k);
        }
        
        return c+m;
    }
};
