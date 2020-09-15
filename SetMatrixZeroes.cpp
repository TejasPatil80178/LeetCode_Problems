class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int> r;
        set<int> c;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(matrix[i][j]==0){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto it = r.begin();it!=r.end();it++){
            for(int j = 0;j<n;j++){
                matrix[*it][j] = 0;
            }
        }
        for(auto it = c.begin();it!=c.end();it++){
            for(int i = 0;i<m;i++){
                matrix[i][*it] = 0;
            }
        }
        
    }
};
