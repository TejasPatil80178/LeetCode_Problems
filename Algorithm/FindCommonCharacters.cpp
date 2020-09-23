class Solution {
public:
    string comm(string a,string b){
        string s;
        int i = 0;
        int j = 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        while(i<a.size() && j<b.size()){
            if(a[i] > b[j]){
                j++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else if(a[i]==b[j]){
                s+=a[i];
                i++;
                j++;
            }
        }
        return s;
    }
    
    vector<string> commonChars(vector<string>& A) {
        int n = A.size();
        string s = A[0];
        for(int i = 1;i<n;i++){
            s = comm(s,A[i]);
        }
        vector<string> v;
        for(int i = 0;i<s.length();i++){
            string k;
            k+=s[i];
            v.push_back(k);
        }
        
        return v;
    }
};
