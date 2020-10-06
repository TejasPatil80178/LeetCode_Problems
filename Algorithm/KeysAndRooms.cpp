class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> v(n,0);
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(v[x]==0){
                v[x] = 1;
                for(int i = 0;i<rooms[x].size();i++){
                    q.push(rooms[x][i]);
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            if(v[i]==0) return 0;
        }        
        return 1;
    }
};
