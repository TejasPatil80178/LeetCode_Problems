class Solution {
public:
    
    int func(vector<int>& v,int s,int e){
        int c = 0;
        for(int i = s;i<=e;i++){
            if(v[i] < 0){
                c++;
            }
        }
        if(c%2==0) return (e-s)+1;
        else{
            int a = s;
            int b = e;
            for(int i = s;i<=e;i++){
                if(v[i] < 0){
                    a = i;
                    break;
                }
            }
            for(int i = e;i>=s;i--){
                if(v[i] < 0){
                    b = i;
                    break;
                }
            }
            
            return max(e-a,b-s);
        }
    }
    
    int getMaxLen(vector<int>& nums) {
        nums.insert(nums.begin(),0);
        nums.push_back(0);
        int n = nums.size();
        vector<int> pos;
        for(int i = 0;i<n;i++){
            if(nums[i]==0) pos.push_back(i);
        }
        int m = 0;
        for(int i = 1;i<pos.size();i++){
            m = max(m, func(nums,pos[i-1] + 1, pos[i]-1));
        }
        
        return m;
    }
};
