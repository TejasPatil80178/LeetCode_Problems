class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i<n){
            if(nums[i] == val) break;
            i++;
        }
        int j = i;
        while(j<n){
            if(nums[j]!=val) break;
            j++;
        }
        while(j<n){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        return i;
        
    }
};
