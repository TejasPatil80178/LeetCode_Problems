class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        map<int,vector<int>> mp;
        for(int i = 0;i<R;i++){
            for(int j = 0;j<C;j++){
                int x = abs(r0-i) + abs(c0-j);
                mp[x].push_back(i);
                mp[x].push_back(j);
            }
        }
        vector<vector<int> > v(R*C,vector<int> (2,0));
        int k = 0;
        for(auto a : mp){
            int j = 0;
            while(j < a.second.size()){
                v[k][0] = a.second[j];
                j++;
                v[k][1] = a.second[j];
                j++;
                k++;
            }
        }
        
        return v;
    }
};
