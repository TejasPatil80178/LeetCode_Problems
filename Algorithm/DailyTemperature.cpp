class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> s;
        int n = T.size();
        vector<int> v(n,0);
        
        s.push(0);
        for(int i = 1;i<n;i++){
            while(!s.empty() && T[i] > T[s.top()]){
                v[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        
        return v;
    }
};
