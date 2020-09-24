class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int sum = 0;
        int n = A.size();
        int m = A[0].size();
        //cout<<n<<" "<<m<<"\n";
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n-1;j++){
                if(A[j][i] > A[j+1][i]){
                    sum++;
                    break;
                }
            }
        }
        
        return sum;
    }
};
