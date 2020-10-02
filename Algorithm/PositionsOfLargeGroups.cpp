class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int> > v;
        int n = s.length();
        int i = 0;
        while(i<n){
            int j = i;
            int c = 0;
            while(j<n && s[i]==s[j]){
                c++;
                j++;
            }
            if(c>=3){
                v.push_back({i,j-1});
            }    
            i = j;
        }
        return v;
    }
};
