class Solution {
public:
    int n;
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        n = img1.size();
        int ans = 0;
        
        for(int i = -n;i<n;i++){
            for(int j = -n;j<n;j++){
                ans = max(ans,overLap(img1,img2,i,j));
            }
        }
        
        return ans;
    }
    
    
    int overLap(vector<vector<int>>& a,vector<vector<int>>& b,int r,int c){
        int count = 0;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if((i+r) < 0 || i+r>=n || c+j<0 || c+j>=n) continue;
                
                count+=(a[i+r][j+c] & b[i][j]);
             }
        }
        
        return count;
    }
};
