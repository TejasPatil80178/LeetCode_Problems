class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int,char> > pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        
        string sol;
        while(!pq.empty()){
            pair<int,char> p = pq.top();
            pq.pop();
            
            while(p.first > 0){
                sol+=p.second;
                p.first--;
            }
        }
        return sol;
    }
};
