class Solution {
public:
    int sum(int n){
        int s = 0;
        while(n>0){
            s+=(n%10);
            n = n/10;
        }
        return s;
    }
    int countLargestGroup(int n) {
        map<int,int> mp;
        for(int i = 1;i<=n;i++){
            mp[sum(i)]++;
        }
        int c = 0;
        int m = INT_MIN;
        for(auto it = mp.begin(),it!=mp.end();it++){
            if(it->second > m){
                m = it->second;
                c = 0;
            }
            if(it->second == m){
                c++;
            }
        }
        
        return c;
    }
};
