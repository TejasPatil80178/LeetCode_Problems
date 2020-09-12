class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int j = n-1;
        for(int i = 0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                j = i;
                break;
            }
        }
        
        if(target>=nums[0] && target<=nums[j]){
            return bsearch(nums,0,j,target);
        }
        else{
            return bsearch(nums,j+1,n-1,target);
        }
    }
    
    int bsearch(vector<int>& v,int s,int e,int b){
        while(s<=e){
            int mid = (s+e) / 2;
            if(v[mid] == b){
                return mid;
            }
            else if(v[mid] > b){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        
        return -1;
    }
    
    
};
