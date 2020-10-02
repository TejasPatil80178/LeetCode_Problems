class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length()!=B.length()) return 0;
        if(A==B) return 1;
        int n = A.length();
        for(int i = 0;i<n;i++){
            if(A[i]==B[0]){
                string b = A.substr(i,n-i)+A.substr(0,i);
                if(b==B) return 1;
            }
        }
        return 0;
    }
};
