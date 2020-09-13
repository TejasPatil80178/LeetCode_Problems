class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 0;i<=j;i++){
            if(i==n-1) return true;
            
            j = max(j , i+nums[i]);
        }
        
        return false;
    }
};
