class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int n = A.size();
        if(n==0) return 0;
        sort(A.begin(),A.end());
        int i = 0;
        while(K>0){
            A[i] = A[i]*-1;
            if(i < n - 1 && (A[i] > A[i+1])) i++;
            K--;
        }
        //cout<<"\n";
        int sum = 0;
        for(int i = 0;i<n;i++){
            //cout<<A[i]<<" ";
            sum+=A[i];
        }
        return sum;
    }
};
