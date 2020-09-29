class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
       
        
        vector<pair<int,int>> v;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==1){
                    v.push_back({i,j});
                }
            }
        }
        
        int c = 0;
        
        for(int i = 0;i<v.size();i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(mat[j][v[i].second] == 1) count++;
            }
            for(int k = 0;k<m;k++){
                if(mat[v[i].first][k]==1) count++;
            }
            if(count==2) c++;
        }
        
        return c; 
        
    }
};
