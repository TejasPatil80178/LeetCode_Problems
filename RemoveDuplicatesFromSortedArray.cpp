class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int k = 1;
        int sum = 1;
        int i = 1;
        while(i<n){
            while(i<n && nums[i-1] == nums[i]){
                i++;
            }
            if(i<n){
                nums[k] = nums[i];
                i++;
                k++;
                sum++;
            }
        }
        
        return sum;
    }
};
