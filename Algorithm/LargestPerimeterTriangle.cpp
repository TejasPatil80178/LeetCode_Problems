class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int n = a.size();
        int  i = 0;
        while(i<n-2){
            if(a[i] < a[i+1] + a[i+2]){
                return a[i]+a[i+1]+a[i+2];
            }
            else i++;
        }
        return 0;
        
        
    }
};
