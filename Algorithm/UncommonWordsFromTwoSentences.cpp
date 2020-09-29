class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> v;
        map<string,int> mp;
        int i = 0;
        while(i<A.length()){
            int j = i;
            string s;
            while(j<A.length() && A[j]!=' '){
                s+=A[j];
                j++;
            }
            mp[s]++;
            i = j+1;
        }
        i = 0;
        while(i<B.length()){
            int j = i;
            string s;
            while(j<B.length() && B[j]!=' '){
                s+=B[j];
                j++;
            }
            mp[s]++;
            i = j+1;
        }
        
        for(auto it = mp.begin();it!=mp.end();it++){
            if(it->second == 1){
                v.push_back(it->first);
            }
        }
        
        return v;
        
    }
};
