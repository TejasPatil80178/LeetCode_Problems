class Solution {
public:
    int reverse(int x) {
        bool flag = 0;
        if(x<0) {
            flag = 1;
            //cout<<x<<" "<<abs(x)<<"\n";
            x = abs(x);
        }
        long long ans = 0;
        int i = 1;
        while(x>0){
            ans = (ans*i) + (x%10);
            if(ans>INT_MAX){
                return 0;
            }
            else if(flag){
                if((-1 * ans)<INT_MIN) return 0;
            }
            x = x/10;
            i = 10;
        }
        if(flag) ans*=(-1);
        return ans;
    }
};
