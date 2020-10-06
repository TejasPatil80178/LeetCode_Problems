class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int c = 0;
        int n = light.size();
        vector<int> v(n,0);
        int l = 0;
        int k = l;
        bool flag = 0;
        for(int i = 0;i<n;i++){
            k = max(k,light[i]-1);
            v[light[i]-1] = 1;
            while(l<n && v[l]==1){
                l++;
            }
            
            if(l-1 == k) c++;
        }
        return c;
    }
};
