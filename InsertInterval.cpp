class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(newInterval.empty()) return intervals;
        if(intervals.empty()){
            if(!newInterval.empty()) intervals.push_back(newInterval);
            return intervals;
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int> > v;
        int k = 0;
        v.push_back(intervals[0]);
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
