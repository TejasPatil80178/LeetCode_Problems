class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int n = arr.size();
        int j = i;
        int sum = 0;
        int c = 0;
        while(j-i+1<=k){
            sum+=arr[j];
            j++;
        }
        if(sum/k >= threshold) c++;
        
        for(;j<n;j++){
            sum-=arr[i];
            sum+=arr[j];
            i++;
            if(sum/k >= threshold) c++;
        }
        return c;
    }
};
