class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        if(n==0) return 0;
        
        int l = 0;
        int i = n-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        for(;i>=0;i--){
            if(s[i]!=' ') l++;
            else break;
        }
        
        return l;
    }
};
