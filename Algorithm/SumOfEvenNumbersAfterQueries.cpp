class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        int n = A.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            if(A[i]%2==0) sum+=A[i];
        }
        vector<int> v;
        int m = queries.size();
        for(int i = 0;i<m;i++){
            if(A[queries[i][1]]%2==0){
                sum-=A[queries[i][1]];
            }
            if((A[queries[i][1]] + queries[i][0])%2==0){
                sum+=(A[queries[i][1]] + queries[i][0]);
            }
            A[queries[i][1]] += queries[i][0];
            v.push_back(sum);
        }
        
        return v;
    }
};
