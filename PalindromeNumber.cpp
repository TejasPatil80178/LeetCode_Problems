class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string a = s;
        reverse(s.begin(),s.end());
        if(a==s) return 1;
        else return 0;
    }
};
