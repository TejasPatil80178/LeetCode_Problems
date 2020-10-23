class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> g[n];
        for(int i = 0;i<edges.size();i++){
            g[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> v;
        for(int i = 0;i<n;i++){
            if(g[i].empty()) v.push_back(i);
        }
        return v;
    }
};
