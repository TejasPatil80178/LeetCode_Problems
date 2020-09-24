class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n = A.size();
        if(n<3) return 0;
        
        int i = 1;
        bool f1 = 0;
        bool f2 = 0;
        while(i<n && A[i-1] < A[i]){
            f1 = 1;
            i++;
        }
        while(i<n && A[i-1] > A[i]){
            i++;
            f2 = 1;
        }
        if(i==n && f1 && f2) return true;
        else return false;
        
    }
};
