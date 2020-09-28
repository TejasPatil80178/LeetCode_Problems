class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        map<int,int> mp;
        int pos = 0;
        int m = INT_MIN;
        int n = position.size();
        for(int i = 0;i<n;i++){
            mp[position[i]]++;
            if(mp[position[i]] > m){
                m = mp[position[i]];
                pos = position[i];
            }
        }
        int c = 0;
        for(auto it = mp.begin();it!=mp.end();it++){
            if(abs(it->first - pos)%2==0){
                if(it->first!=pos) mp[pos]+=it->second;
            }
            else if(it->first!=pos-1){
                mp[pos-1]+=it->second;
            }
        }
        return min(mp[pos],mp[pos-1]);
        
    }
};
