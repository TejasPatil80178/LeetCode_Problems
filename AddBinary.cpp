class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length();
        int m = b.length();
        int i = n-1;
        int j = m-1;
        string s;
        bool flag = 0;
        while(i>=0 && j>=0){
            int x = (a[i]-'0') + (b[j]-'0') + flag;
            if(x==1 || x==0){
                s = (char)(x+'0') + s;
                flag = 0;
            }
            else{
                if(x==2){
                    s = '0'+s;
                }
                else{
                    s = '1' + s;
                }
                flag = 1;
            }
            i--;
            j--;
        }
        while(i>=0){
            int x = (a[i]-'0')+flag;
            if(x==2){
                s = '0' + s;
                flag = 1;
            }
            else{
                s = (char)(x+'0')+s;
                flag = 0;
            }
            i--;
        }
        while(j>=0){
            int x = (b[j]-'0') + flag;
            if(x==2){
                s = '0' + s;
                flag = 1;
            }
            else{
                s = (char)(x+'0') + s;
                flag = 0;
            }
            j--;
        }
        if(flag){
            s = '1'+s;
        }
        return s;
        
        
    }
};
