class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        if(n<=k){
            reverse(s.begin(),s.end());
            return s;
        }
        
        int i = 0;
        while(i<n){
            //cout<<s[i]<<" ";
            if(n-i<=k){
                reverse(s.begin()+i,s.end());
            }
            else{
                reverse(s.begin()+i,s.begin()+i+k);
            }
            i = i + (2*k);
        }
        return s;
    }
};
