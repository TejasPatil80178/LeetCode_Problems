class Solution {
public:
    bool isSubsequence(string t, string s) {
        int i = 0;
        int n = t.length();
        int m = s.length();
        //cout<<n<<" "<<m;
        int j = 0;
        while(i<n && j<m){
            if(t[i]==s[j]){
                i++;
            }
            j++;
        }
        if(i!=n) return 0;
        else return 1;
    }
};
