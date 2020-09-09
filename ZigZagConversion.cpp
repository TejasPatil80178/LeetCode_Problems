class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        vector< vector<int> > v(numRows);
        bool flag = 0;
        int x = 2*(numRows-1);
        if(x==0) return s;
        for(int i = 0;i<x;i++){
            int j = i;
            while(j<n){
                if(i>(numRows-1)) v[x-i].push_back(j);
                else v[i].push_back(j);
                j += (2*(numRows-1));
            }
            
        }
        string a;
        for(int i = 0;i<numRows;i++){
            sort(v[i].begin(),v[i].end());
            for(int j = 0;j<v[i].size();j++){
                a+=s[v[i][j]];
            }
            //cout<<"\n";
        }
        
        
        return a;
    }
};
