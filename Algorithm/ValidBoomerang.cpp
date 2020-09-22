class Solution {
public:
    double dist(vector<int> a,vector<int> b){
        return sqrt(pow(a[0]-b[0] , 2) + pow(a[1] - b[1],2));
    }
    bool isBoomerang(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        double a = dist(points[0],points[1]);
        double b = dist(points[1],points[2]);
        double c = dist(points[0],points[2]);
        
        if(a==0 || b==0 || c==0) return 0;
        if(a+b > c) return 1;
        else return 0;
    }
};
