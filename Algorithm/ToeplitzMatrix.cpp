class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==1||n==1) return 1;
        for(int i = m-1;i>=0;i--){
            int x = matrix[i][0];
            int k = i;
            for(int j = 0;j<n && k<=m-1;j++){
                if(x!=matrix[k][j]){
                    return 0;
                }
                k++;
            }            
        }
        for(int j = 1;j<n;j++){
            int x = matrix[0][j];
            int k = j;
            for(int i = 0;i<m && k<=n-1;i++){
                if(x!=matrix[i][k]) return 0;
                k++;
            }            
        }
        
        return 1;
    }
};
