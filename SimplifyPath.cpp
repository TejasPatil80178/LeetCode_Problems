class Solution {
public:
    string simplifyPath(string path) {
        //path+='/';
        stack<string> s;
        int n = path.length();
        int i = 0;
        while(i<n){
            if(path[i]!='/'){
                int j = i;
                string a;
                while(j<n && path[j]!='/'){
                    a+=path[j];
                    j++;
                }
                if(a=="..") {
                    if(!s.empty()) s.pop();
                }
                else if(a!=".") s.push(a);
                i = j;
            }
            else{
                i++;
            }
        }
        string st;
        while(!s.empty()){
            st = '/' + s.top() + st;
            s.pop();
        }
        if(st.empty()) st+='/';
        
        return st;
    }
};
