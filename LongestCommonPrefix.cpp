class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        string a = strs[0];
        for(int i = 1;i<n;i++){
            int p = a.length();
            int q = strs[i].length();
            string c;
            for(int j = 0;j<min(p,q);j++){
                if(a[j]==strs[i][j]) c+=a[j];
                else break;
            }
            a = c;
        }
        
        return a;
    }
};
