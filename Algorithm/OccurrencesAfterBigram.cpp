class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> v;
        int n = text.length();
        int i = 0;
        while(i<n){
            int j = i;
            string a;
            while(j<n && text[j]!=' '){
                a+=text[j];
                j++;
            }
            v.push_back(a);
            i = j+1;
        }
        vector<string> sol;
        for(int i = 0;i<v.size()-1;i++){
            if(v[i]==first && v[i+1]==second){
                if(i+2<=v.size()-1) sol.push_back(v[i+2]);
            }
        } 
        return sol;
    }
};
