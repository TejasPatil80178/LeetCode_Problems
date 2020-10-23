class Solution {
public:
    
    bool check(vector<vector<int>>& grid, int r,int c,int m,int n){
        for(int i = 0;i<m;i++){
            if(i!=r && grid[i][c]==1) return 0;
        }
        for(int i = 0;i<n;i++){
            if(i!=c && grid[r][i]==1) return 0; 
        }
        
        return 1;
        
    }
    
    
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int sum = 0;
        int nc = 0;
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]==1){
                    sum++;
                    if(check(grid,i,j,m,n)) nc++;
                }
            }
        }
        
        return sum - nc;
        
    }
};
