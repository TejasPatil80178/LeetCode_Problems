class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = 1;
        int l = area/w;
        vector<int> v = {l,w};
        int i = w;
        int m = INT_MAX;
        while(l>=i){
            if(l-w < m){
                m = l-w;
                v[0] = l;
                v[1] = w;
            }
            i++;
            if(area%i==0){
                l = area/i;
                w = i;
            }
        }
        return v;
    }
};
