class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        v[0] = bsearch(nums,target,1);
        v[1] = bsearch(nums,target,0);
        
        return v;
    }
    
    int bsearch(vector<int>& nums,int b,int k){
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e){
            int mid = (s+e) / 2;
            if(nums[mid] == b){
                ans = mid;
                if(k){
                    e = mid-1;
                }
                else{
                    s = mid+1;
                }
            }
            else if(nums[mid] > b) e = mid-1;
            else s = mid+1;
        }
        
        
        return ans;
    }
};
