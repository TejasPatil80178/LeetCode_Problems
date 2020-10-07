class Solution {
public:
    int n;
    int m;
    int sum(vector<vector<int> >& v,int r,int c){
        if(r<0 || r>=n || c<0 || c>=m || v[r][c]==0) return 0;
        v[r][c] = 0;
        return 1+sum(v,r-1,c)+sum(v,r+1,c)+sum(v,r,c-1)+sum(v,r,c+1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int area = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                area = max(area,sum(grid,i,j));
            }
        }
        return area;
    }
};
