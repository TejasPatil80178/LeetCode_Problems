class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        if(K==0) return A;
        
        vector<int> v;
        int n = A.size();
        if(n==0){
            while(K>0){
                v.push_back(K%10);
                K = K / 10;
            }
            reverse(v.begin(),v.end());
            return v;
        }
        
        for(int i = n-1;i>=0;i--){
            if(K>0){
                int x = K+A[i];
                v.push_back(x%10);
                K = x/10;
            }
            else{
                v.push_back(A[i]);
            }
        }
        while(K>0){
            v.push_back(K%10);
            K = K/10;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
