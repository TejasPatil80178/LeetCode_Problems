class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int> > pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        
        vector<int> v;
        while(k>0){
            pair<int,int> p = pq.top();
            pq.pop();
            v.push_back(p.second);
            k--;
        }
        
        return v;
    }
};
