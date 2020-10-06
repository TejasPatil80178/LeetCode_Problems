class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        if(k < 3) return k;
        
        vector<int> fb;
        fb.push_back(1);
        fb.push_back(1);
        int i = 2;
        while(fb[i-1] + fb[i-2] <= k){
            fb.push_back(fb[i-1]+fb[i-2]);
            i++;
        }
        int n = fb.size();
        
        int c = 0;
        for(int i = n-1;i>=0;i--){
            if(k>0){
                if(fb[i] <= k){
                    k-=fb[i];
                    c++;
                }
            }
            else if(k==0) break;
        }
        
        
        return c;
    }
};
