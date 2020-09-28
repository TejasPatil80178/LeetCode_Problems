class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        if(sentence.empty() || searchWord.empty()) return -1;
        
        int n = sentence.length();
        int m = searchWord.length();
        int i = 0;
        int c = 0;
        while(i<n){
            c++;
            int j = i;
            string word;
            while(j<n && sentence[j]!=' '){
                word+=sentence[j];
                j++;
            }
            if(searchWord == word.substr(0,m)) return c;
            i = j+1;
        }
        
        return -1;
    }
};
