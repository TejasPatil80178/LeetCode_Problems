class Solution {
public:
    string toGoatLatin(string s) {
        int n = s.length();
        string sol;
        string a;
        int i = 0;
        while(i<n){
            a+='a';
            int j = i;
            string word;
            while(j<n && s[j]!=' '){
                word += s[j];
                j++;
            }
            //cout<<word<<" ";
            if(word[0]!='a'&&word[0]!='A'&&word[0]!='e'&&word[0]!='E'&&word[0]!='i'&&word[0]!='I'&&word[0]!='o'&&word[0]!='O'&&word[0]!='u'&&word[0]!='U'){
                word+=word[0];
                word.erase(word.begin());
            }
            word+="ma" + a;
            sol+=(' '+word);
            i=j+1;
        }
        sol.erase(sol.begin());
        return sol;
    }
};
