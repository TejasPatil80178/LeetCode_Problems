class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        if(n==0 || m==0) return "0";
        if(num1=="0" || num2 == "0") return "0";
        vector<int> sol(n+m,0);
        for(int i = n-1;i>=0;i--){
            for(int j = m-1;j>=0;j--){
                sol[i+j+1] += ((num1[i]-'0') * (num2[j] - '0'));
                if(sol[i+j+1] > 9){
                    sol[i+j] += (sol[i+j+1] / 10);
                    sol[i+j+1]%=10;
                }
            }
        }
        
        while(sol[0]==0){
            sol.erase(sol.begin());
        }
        
        string s;
        for(int i = 0;i<sol.size();i++){
            s+=to_string(sol[i]);
        }        
        return s;
    }
    
};
