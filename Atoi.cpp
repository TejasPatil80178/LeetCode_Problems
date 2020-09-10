class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while(s[i]==' '){
            i++;
        }
        bool flag = 0;
        if(s[i]=='+' || s[i]=='-'){
            if(s[i]=='-') flag=1;
            i++;
        }
        long long a = 0;
        int j = 10;
        while(s[i]>='0' && s[i]<='9'){
            int x = s[i] - '0';
            a = (a*j) + (x);
            if(flag){
                if((-1 * a) < INT_MIN) return INT_MIN;
            }
            else if(a > INT_MAX) return INT_MAX;
            i++;
        }
        if(flag) return (-1*a);
        else return a;
    }
};
