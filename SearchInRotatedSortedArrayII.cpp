class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int n = nums.size();
        if(n==0) return 0;
        int e = n-1;
        int s1 = s;
        int e1 = e;
        for(int i = 0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                e1 = i;
                s1 = i+1;
                break;
            }
        }
        if(target>=nums[s] && target<=nums[e1]){
            return bSearch(nums,s,e1,target);
        }
        else{
            return bSearch(nums,s1,e,target);
        }
    }
    
    bool bSearch(vector<int> &v,int s,int e,int b){
        while(s<=e){
            int mid = (s+e)/2;
            if(v[mid]==b) return 1;
            else if(v[mid] > b) e = mid-1;
            else s = mid+1;
        }
        
        return 0;
    }
};
