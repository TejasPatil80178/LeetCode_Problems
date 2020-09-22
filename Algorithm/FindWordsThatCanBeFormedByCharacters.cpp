class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();
        if(n==0 || chars.length()==0) return 0;
        
        vector<int> v(26,0);
        for(int i = 0;i<chars.length();i++){
            v[chars[i] - 'a']++;
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            bool flag = 1;
            vector<int> temp(26,0);
            for(int j = 0;j<words[i].length();j++){
                temp[words[i][j] - 'a']++;
            }
            for(int k = 0;k<26;k++){
                if(temp[k] > v[k]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                sum+=words[i].length();
            }
        }
        
        return sum;
    }
};
