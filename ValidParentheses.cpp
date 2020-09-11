class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i]=='(' || s[i] == '{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(!st.empty() && st.top()=='(') st.pop();
                    else return 0;
                }
                else if(s[i]=='}'){
                    if(!st.empty() && st.top()=='{') st.pop();
                    else return 0;
                }
                else if(s[i]==']'){
                    if(!st.empty() && st.top()=='[') st.pop();
                    else return 0;
                }
            }
        }
        
        if(st.empty()) return 1;
        else return 0;
    }
};
