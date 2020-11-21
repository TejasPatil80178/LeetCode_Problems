class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int K) {
        unordered_map<int,vector<pair<int,int>>> mp;
        for(auto  i : times){
            mp[i[0]].push_back({i[2],i[1]});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dis(n+1,INT_MAX);
        vector<int> vis(n+1,0);
        dis[K] = 0;
        pq.push({0,K});
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            if(!vis[p.second]){
                vis[p.second] = 1;
                for(auto i : mp[p.second]){
                    if(dis[i.second] > i.first + p.first){
                        dis[i.second] = i.first+p.first;
                        pq.push({dis[i.second],i.second});
                    }
                }
            }
        }
        
        int m = INT_MIN;
        for(int i = 1;i<=n;i++){
            cout<<dis[i]<<" ";
            m = max(m,dis[i]);
        }
        
        return m==INT_MAX ? -1:m;
    }
};
