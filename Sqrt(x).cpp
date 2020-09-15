class Solution {
public:
    int mySqrt(int x) {
        
        // retrun sqrt(x);
        
        if(x==1) return 1;
        int s = 1;
        int e = (x/2);
        while(s<=e){
            long long mid = (s+e)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid > x) e = mid-1;
            else s = mid+1;
        }
        return e;
    }
};
