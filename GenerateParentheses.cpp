class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s;
        while(n--){
            s+="()";
        }
        
        sort(s.begin(),s.end());
        vector<string> v;
        do{
            if(balanced(s)) v.push_back(s);
        }while(next_permutation(s.begin(),s.end()) && s[0]!=')');
            
        return v;
    }
    
    bool balanced(string s){
        stack<char> st;
        for(int  i = 0;i<s.length();i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(!st.empty() && st.top() == '(') st.pop();
                else return 0;
            }
        }

        if(!st.empty()) return 0;
        else return 1;
    }
};
