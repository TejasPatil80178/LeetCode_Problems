class RecentCounter {
public:
    vector<int> r;
    RecentCounter() {
        r.clear();
    }
    
    int ping(int t) {
        r.push_back(t);
        int c = 0;
        int n = r.size();
        for(int i = n-1;i>=0;i--){
            if(r[i]>= t-3000 && r[i]<=t){
                c++;
            }
            else break;
        }
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
