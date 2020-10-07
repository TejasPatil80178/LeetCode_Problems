class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        while(i<n){
            if(nums[i]==1){
                int j = i+1;
                while(j<n){
                    if(nums[j]==1){
                        if(j-i-1 < k) return 0;
                        break;
                    }
                    j++;
                }
                i = j;
            }
            else i++;
        }
        return 1;
    }
};
