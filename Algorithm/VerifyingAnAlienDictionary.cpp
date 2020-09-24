class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> v(26,0);
        for(int i = 0;i<order.length();i++){
            v[order[i] - 'a'] = i;
        }
        bool flag = 0;
        for(int i = 0;i<words.size()-1;i++){
            flag = 1;
            string a = words[i];
            string b = words[i+1];
            for(int j = 0;j<min(a.length(),b.length());j++){
                if(a[j]!=b[j]){
                    if(v[a[j] - 'a'] > v[b[j] - 'a']) return false;
                    flag = 0;
                    break;
                }
            }
            if(flag && b.length() < a.length()) return false;
            
        }
        
        return true;
    }
};
