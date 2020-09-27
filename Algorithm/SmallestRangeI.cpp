class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        int n = A.size();
        if(K>=abs(A[n-1]/2)) return 0;
        
        int a = A[0]+K;
        int b = A[n-1]-K;
        return abs(b-a);
    }
};
