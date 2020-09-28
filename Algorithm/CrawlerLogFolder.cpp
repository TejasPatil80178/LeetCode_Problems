class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        int n = logs.size();
        for(int i = 0;i<n;i++){
            if(logs[i]=="../"){
                if(!s.empty()) s.pop();
            }
            else if(logs[i]=="./"){}
            else{
                s.push(logs[i]);
            }
        }
        return s.size();
    }
};
