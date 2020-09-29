class Solution {
public:
    bool isPrime(int n){
        if(n < 2) return 0;
        else if(n==2) return 1;
        else if(n%2==0) return 0;
        else{
            for(int i = 3;i<=sqrt(n);i+=2){
                if(n%i==0) return 0;
            }
        }
        
        return 1;
    }
    int setBits(int n){
        int c = 0;
        while(n>0){
            c+=(n%2);
            n = n>>1;
        }
        return c;
    }
    int countPrimeSetBits(int L, int R) {
        int count = 0;
        for(int i = L;i<=R;i++){
            int k = setBits(i);
            if(isPrime(k)) count++;
        }
        
        return count;
    }
};
