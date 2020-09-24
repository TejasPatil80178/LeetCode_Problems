class Solution {
public:
    vector<int> diStringMatch(string S) {
        int i = 0;
        int d = S.length();
        int n = d;
        
        vector<int> v(n+1,0);
        for(int j = 0;j<n;j++){
            if(S[j]=='I'){
                v[j] = i;
                i++;
            }
            else{
                v[j] = d;
                d--;
            }
        }
        v[n]= i;
        
        return v;
        
    }
};
