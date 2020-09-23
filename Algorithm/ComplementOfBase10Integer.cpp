class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0) return 1;
        int ans = 0;
        int n = N;
        while(N>0){
            N = N/2;
            ans = (ans<<1 | 1);
        }
        
        return (ans^n);
    }
};
