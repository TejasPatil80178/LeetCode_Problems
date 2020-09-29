class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> v(num_people,0);
        int i = 1;
        int j = 0;
        while(candies > 0){
            v[j%num_people] += min(candies,i);
            candies-=i;
            i++;
            j++;
        }
        
        return v;
    }
};
