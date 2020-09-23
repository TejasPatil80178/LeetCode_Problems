class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> v(N+1,0);
        int n = trust.size();
        
        vector<int> p1(N+1,0);
        vector<int> p2(N+1,0);
        for(int i =0;i<n;i++){
            p1[trust[i][0]]++;
            p2[trust[i][1]]++;
        }
        
        for(int i = 1;i<=N;i++){
            if(p1[i]==0){
                if(p2[i]==N-1) return i;
            }
        }
        
        
        return -1;
    }
};
