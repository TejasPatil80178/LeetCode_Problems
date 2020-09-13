class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;
        pair<int,int> interval = {0,0};
        int jumps = 0;
        while(true){
            int j = -1;
            jumps++;
            for(int i = interval.first; i<=interval.second;i++){
                j = max(j,i+nums[i]);
            }
            
            if(j>=n-1){
                return jumps;
            }
            interval = {interval.second+1,j};
        }
    }
};
