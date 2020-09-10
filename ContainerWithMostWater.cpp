class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int m = 0;
        while(i!=j){
            int x = min(height[i],height[j]);
            int l = j-i;
            m = max(m,x*l);
            if(height[i] < height[j]){
                i++;
            }
            else if(height[j] < height[i]){
                j--;
            }
            else{
                if(height[i+1] > height[j-1]) i++;
                else j--;
            }
        }
        
        
        return m;
    }
};
