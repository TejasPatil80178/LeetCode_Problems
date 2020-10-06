class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        map<int,vector<int> > mp;
        int n = points.size();
        for(int i = 0;i<n;i++){
            int c = pow(points[i][0],2) + pow(points[i][1],2);
            mp[c].push_back(i);
        }
        vector<vector<int> >v;
        for(auto a:mp){
            for(int i = 0;i<a.second.size() && K>0;i++){
                v.push_back(points[a.second[i]]);
                K--;
            }
            if(K<=0) break;
        }
        return v;
    }
};
