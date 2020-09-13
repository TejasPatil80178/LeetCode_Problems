class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > v;
        int n = intervals.size();
        if(n==0) return v;
        sort(intervals.begin(),intervals.end());
        int k = 0;
        v.push_back(intervals[0]);
        if(n==1) return v;
        for(int i = 1;i<n;i++){
            if(v[k][1] >= intervals[i][0]){
                v[k][1] = max(v[k][1],intervals[i][1]);
            }
            else{
                v.push_back(intervals[i]);
                k++;
            }
        }
        
        return v;
    }
};
