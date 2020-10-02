class Solution {
public:
    int dayOfYear(string date) {
        vector<int> md = {31,28,31,30,31,30,31,31,30,31,30,31};
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));
        int sum = 0;
        
        for(int i = 1;i<m;i++){
            sum+=md[i-1];
        }
        if(m>2 && y%4==0 && y%100!=0) sum++;
        sum+=d;
        return sum;
    }
};
