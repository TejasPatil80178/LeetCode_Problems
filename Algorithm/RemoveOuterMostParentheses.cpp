class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        int n = s.length();
        string a;
        if(n==0) return "";
        
        vector<int> v;
        
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                int x = st.top();
                st.pop();
                if(st.empty()){
                    v.push_back(x);
                    v.push_back(i);
                }                
            }
        }
        int k = 0;
        while(k<v.size()-1){
            for(int i = v[k]+1;i<v[k+1];i++){
                a+=s[i];
            }
            k++;
        }
        
        return a;
    }

};
