class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        int chr = '1';
        for(int i = 0;i<n;i++){
            s+=chr;
            chr++;
        }
        int i = 1;
        do{
            if(i==k) break;
            i++;
        }
        while(next_permutation(s.begin(),s.end()));
        return s;
    }
};
