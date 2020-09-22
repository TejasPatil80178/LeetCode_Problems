class Solution {
public:
    bool divisorGame(int N) {
        bool flag = 1;
        if(N==1) return 0;
        
        while(N>0){
            int i = 1;
            while(i < N){
                if(N%i==0){
                    N = N-i;
                    if(N==1) return flag;
                    if(flag) flag = 0;
                    else flag = 1;
                    break;
                }
                else{
                    i++;
                }
            }
        }
        return flag;
    }
};
