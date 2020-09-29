class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       // map<int,int> mp;
        int c = -1;
        int n = arr.size();
        int i = 0;
        while(i<n){
            int j = i;
            int count = 0;
            while(j<n && arr[i]==arr[j]){
                count++;
                j++;
            }
           // cout<<arr[i]<<" "<<count<<"\n";
            if(count == arr[i]) c = arr[i];
            
            i = j;
        }
        
        return c;
    }
};
