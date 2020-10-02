class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {        
        int k = ops.size();
        if(k==0) return m*n;
        
        int a = ops[0][0];
        int b = ops[0][1];
        for(int i = 0;i<k;i++){
            a = min(a,ops[i][0]);
            b = min(b,ops[i][1]);
        }
        
        return (a*b);
    }
};
