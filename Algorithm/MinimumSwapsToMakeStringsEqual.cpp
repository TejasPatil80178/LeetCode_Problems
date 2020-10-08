class Solution {
public:
    int minimumSwap(string s1, string s2) {
        vector<int> v;
        int n = s1.length();
        for(int i = 0;i<n;i++){
            if(s1[i]!=s2[i]) v.push_back(i);
        }
        
        int sum = 0;
        int i = 0;
        int m = v.size();
        if(m%2==1) return -1;
        
        while(i<m-1){
            if(s1[v[i]]!=s2[v[i]]){
                int j = i+1;
                while(j<m && s2[v[i]]!=s2[v[j]]){
                    j++;
                }
                if(j==m){
                    j = i+1;
                    sum+=2;
                }
                else{
                    sum+=1;
                }
                s1[v[i]] = '0';
                s2[v[i]] = '0';
                s1[v[j]] = '0';
                s2[v[j]] = '0';
            }
            else{
                i++;
            }
            cout<<sum<<" ";
        }
        
        return sum;
    }
};
