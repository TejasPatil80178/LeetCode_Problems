class Solution {
public:
    
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& v,vector<int>& path,int i,int j){
        path.push_back(i);
        if(i == j) v.push_back(path);
        else{
            for(int k = 0;k<graph[i].size();k++){
                dfs(graph,v,path,graph[i][k],j);
            }
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target = graph.size()-1;
        vector<vector<int> > v;
        
        //// Number of paths
/*        if(target < 0) return v;
        queue<int> q;
        q.push(0);
        int sum = 0;
        while(!q.empty()){
            int x = q.front();
            vector<int> a;
            
            for(int i = 0;i<graph[x].size();i++){
                q.push(graph[x][i]);
            }
            if(x == target) sum++;
        }
        cout<<sum<<"\n";//sum;*/
        vector<int> path;
        dfs(graph,v,path,0,target);
        return v;
    }
};
