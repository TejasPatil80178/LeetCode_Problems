class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) return 0;
        bool flag = 0;
        if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
            flag = 1;
        }
        
        long long a = abs(dividend);
        long long b = abs(divisor);
        if((dividend == INT_MIN || dividend == INT_MAX) && b==1){
            if(flag) return INT_MIN;
            else return INT_MAX;
        }
        if(b > a) return 0;
        double x = log2(a) - log2(b);
        long long sum = pow(2,x);
        if(flag) return (-1 * sum);
        else return sum;
    }
};
