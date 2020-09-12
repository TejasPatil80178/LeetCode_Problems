class Solution {
public:
    double myPow(double x, int n) {
        bool flag = 0;
        if(x < 0){
            flag = 1;
            x = (-1*x);
        }
        
        double k = n*(log(x));
        if(flag){
            if(n%2!=0){
                return (-1*exp(k));
            }
        }
        return (exp(k));
    }
};
