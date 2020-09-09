class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lindex(256,-1);
        int m = 1;
        int n = s.length();
        if(n==0) return 0;
        int i = 0;
        for(int j = 0;j<n;j++){
            i = max(i,lindex[s[j]]+1);
            m = max(m,j-i+1);
            lindex[s[j]] = j;
        }
        
        return m;
    }
    
};
