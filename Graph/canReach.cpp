class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        vector<int> v(n,0);
        queue<int> q;
        q.push(start);
        v[start] = 1;
        while(!q.empty()){
            int x = q.front();
            if(arr[x] == 0) return true;
            v[x] = 1;
            q.pop();
            if(x-arr[x] >= 0 && v[x-arr[x]]==0) q.push(x-arr[x]);
            if(x+arr[x] < n && v[x+arr[x]]==0) q.push(x+arr[x]);
            
        }
        return false;
    }
};
