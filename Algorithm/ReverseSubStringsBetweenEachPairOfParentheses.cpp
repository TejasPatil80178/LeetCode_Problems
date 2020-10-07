class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        if(n==0) return s;
        
        stack<string> st;
        for(int i = 0;i<n;i++){
            if(s[i]!=')'){
                string a;
                a += s[i];
                st.push(a);
            }
            else{
                string sol;
                while(!st.empty() && st.top()!="("){
                    sol+=st.top();
                    st.pop();
                }
                if(!st.empty()) st.pop();
                reverse(sol.begin(),sol.end());
                st.push(sol);
            }
        }
        s = "";
        while(!st.empty() && st.top()!="("){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        
        return s;
    }
};
