class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i = 0;
        while(i<n){
            if(i==n-1) return 1;
            else if(bits[i]==1) i+=2;
            else if(bits[i]==0) i++;
        }
        
        return 0;
    }
};
