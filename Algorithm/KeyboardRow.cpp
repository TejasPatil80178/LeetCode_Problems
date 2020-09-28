class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> v(26,0);
        v['q'-'a'] = 0;
        v['w'-'a'] = 0;
        v['e'-'a'] = 0;
        v['r'-'a'] = 0;
        v['t'-'a'] = 0;
        v['y'-'a'] = 0;
        v['u'-'a'] = 0;
        v['i'-'a'] = 0;
        v['o'-'a'] = 0;
        v['p'-'a'] = 0;
        v['a'-'a'] = 1;
        v['s'-'a'] = 1;
        v['d'-'a'] = 1;
        v['f'-'a'] = 1;
        v['g'-'a'] = 1;
        v['h'-'a'] = 1;
        v['j'-'a'] = 1;
        v['k'-'a'] = 1;
        v['l'-'a'] = 1;
        v['z'-'a'] = 2;
        v['x'-'a'] = 2;
        v['c'-'a'] = 2;
        v['v'-'a'] = 2;
        v['b'-'a'] = 2;
        v['n'-'a'] = 2;
        v['m'-'a'] = 2;
        
        int n = words.size();
        vector<string> sol;
        for(int i = 0;i<n;i++){
            char c = words[i][0];
            bool flag = 1;
            if(c>='A' && c<='Z'){
                c+=32;
            }
            for(int j = 1;j<words[i].length();j++){
                char k = words[i][j];
                if(k>='A' && k<='Z') k+=32;
                if(v[c-'a'] != v[k-'a']){
                    flag = 0;
                    break;
                }
            }
           // cout<<"\n";
            if(flag) sol.push_back(words[i]);
        }
        
        return sol;
        
    }
};
