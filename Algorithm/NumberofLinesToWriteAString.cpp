class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int n = s.length();
        vector<int> v(2,0);
    
        if(n==0) return v;
        
        int lines = 1;
        int c = 0;
        for(int i = 0;i<n;i++){
            if(c+widths[s[i]-'a'] <= 100){
                c+=widths[s[i]-'a'];
            }
            else{
                lines++;
                c = widths[s[i]-'a'];
            }
        }
        v[0] = lines;
        v[1] = c;
        return v;
        
    }
};
