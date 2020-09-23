class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        if(n==0) return 0;
        
        vector<int> v(60,0);
        
        for(int i = 0;i<n;i++){
            v[time[i]%60]++;
        }
        
        int sum = 0;
        sum+=(v[0] * (v[0]-1)) / 2;
        sum+=(v[30] * (v[30]-1)) / 2;
        
        for(int i = 1;i<30;i++){
            sum+= (v[i]*v[60-i]);
        }
        
        return sum;
    }
};
