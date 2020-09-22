class Solution {
public:
    vector<int> numMovesStones(int m, int b, int c) {
        vector<int> v = {m,b,c};
        sort(v.begin(),v.end());
        vector<int> a(2,0);
        if(v[0]+1==v[1] && v[1]+1==v[2]) return a;
        
        a[1] += (v[2] - (v[1]+1)) + (v[1] - 1 - v[0]);
        
        if(v[0]+1==v[1] || v[1]+1==v[2] || v[0]+2==v[1] || v[1]+2==v[2]){
            a[0] = 1;
        }
        else{
            a[0] = 2;
        }
        
        
        return a;
    }
};
