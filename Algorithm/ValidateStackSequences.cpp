class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int n = popped.size();
        
        int j = 0;
        int m = pushed.size();
        stack<int> s;
        while(i<n && j<m){
            s.push(pushed[j]);
            j++;
            
            while(!s.empty() && i<n && s.top()==popped[i]){
                s.pop();
                i++;
            }
        }
        
        if(!s.empty()) return 0;
        else return 1;
    }
};
