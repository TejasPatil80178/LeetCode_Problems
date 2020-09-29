class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        int n = nums2.size();
        map<int,int> mp;
        
        for(int i = 0;i<n;i++){
            while(!s.empty() && s.top() < nums2[i]){
                mp[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        int m = nums1.size();
        vector<int> v(m,0);
        for(int i = 0;i<m;i++){
            if(mp.count(nums1[i])){
                v[i] = mp[nums1[i]];
            }
            else{
                v[i] = -1;
            }
        }
        return v;
    }
};
