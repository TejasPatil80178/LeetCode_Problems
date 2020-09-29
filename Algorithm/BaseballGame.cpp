class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        stack<int> s;
        int n = ops.size();
        for(int i = 0;i<n;i++){
            if(ops[i]=="C"){
                if(!s.empty()){
                    sum-=s.top();
                    s.pop();
                }
            }
            else if(ops[i]=="D"){
                if(!s.empty()){
                    int x = 2 * s.top();
                    s.push(x);
                    sum+=x;
                }
            }
            else if(ops[i]=="+"){
                if(!s.empty()){
                    int x = s.top();
                    s.pop();
                    if(!s.empty()){
                        int y = s.top();
                        s.push(x);
                        s.push(x+y);
                        sum+=s.top();
                    }
                    else{
                        s.push(x);
                    }
                }
            }
            else{
                s.push(stoi(ops[i]));
                sum+=s.top();
            }
           // cout<<sum<<" ";
        }
        
        return sum;
    }
};
