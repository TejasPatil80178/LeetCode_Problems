class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k = 1;
        int l = 0;
        int r = n-1;
        int t = 0;
        int b = n-1;
        int dir = 1;
        vector<vector<int> > v(n,vector<int> (n,0));
        while(k<=(n*n) && l<=r && t<=b){
            if(dir==1){
                for(int i = l;i<=r;i++){
                    v[t][i] = k;
                    k++;
                }
                t++;
                dir = 2;
            }
            else if(dir==2){
                for(int i = t;i<=b;i++){
                    v[i][r] = k;
                    k++;
                }
                r--;
                dir = 3;
            }
            else if(dir == 3){
                for(int i = r;i>=l;i--){
                    v[b][i] = k;
                    k++;
                }
                b--;
                dir = 4;
            }
            else{
                for(int i = b;i>=t;i--){
                    v[i][l] = k;
                    k++;
                }
                l++;
                dir = 1;
            }
            
        }
        
        return v;
    }
};
