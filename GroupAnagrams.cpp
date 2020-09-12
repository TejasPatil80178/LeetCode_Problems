class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string> > v;
        if(n==0) return v;
        map<string,vector<string> > mp;
        
        for(int i = 0;i<n;i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            mp[a].push_back(strs[i]);
        }
        
        for(auto it = mp.begin();it!=mp.end();it++){
            v.push_back(it->second);
        }
        return v;
    }
};
