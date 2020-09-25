class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int n = name.length();
        int m = typed.length();
        if(m<n) return 0;
        
        int i = 0;
        int j = 0;
        
        while(i<n){
            int c1 = 1;
            int c2 = 0;
            while(i<n-1 && name[i]==name[i+1]){
                c1++;
                i++;
            }
            while(j<m && name[i]==typed[j]){
                c2++;
                j++;
            }
            if(c2<c1) return 0;
            i++;
        }
        if(i==n && j==m) return 1;
        else return 0;
    }
};
