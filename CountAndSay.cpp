class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        if(n==1) return s;
        
        for(int k = 1;k<n;k++){
            int i = 0;
            string a;
            while(i<s.length()){
                int c = 0;
                int j = i;
                while(s[i]==s[j]){
                    c++;
                    j++;
                }
                a+=(to_string(c) + s[i]);
                i = j;
            }
            s = a;
        }
        
        return s;
    }
};
