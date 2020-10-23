class Solution {
public:
    
    int find(int x,vector<int>& p){
        if(p[x]!=x){
            p[x] = find(p[x],p);
        }
        return p[x];
    }
    
    
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        
        /////Union-Find
        vector<int> p(n,0);
        for(int i = 0;i<n;i++){
            p[i] = i;
        }
        
        for(auto ed : edges){
            int u = ed[0];
            int v = ed[1];
            
            int pu = find(u,p);
            int pv = find(v,p);
            
            if(pu==pv) return ed;
            
            p[pv] = pu; /////Union Operation
        }
        return vector<int>();
    }
};
