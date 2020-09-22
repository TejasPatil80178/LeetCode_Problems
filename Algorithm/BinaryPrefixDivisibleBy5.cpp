class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int n = A.size();
        
        vector<bool> b(n,0);
        
        int x = A[0];
        if(x%5==0){
            b[0] = 1;
        }
        for(int i = 1;i<n;i++){
            x = (x<<1 | A[i]);
            if(x%5==0) {
                b[i]=1;
            }
            x = x%5;
        }
        
        return b;
        
    }
};
