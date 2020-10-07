class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count  = 0;
        
        while(c>0 || a>0 || b>0){
            int x = a%2;
            int y = b%2;
            int z = c%2;
            //cout<<z<<" "<<(x|y)<<" ";
            if(z != (x|y)){
                if(z==0){
                    if(x!=0) count++;
                    if(y!=0) count++;
                }
                else{
                    count++;
                }
            }
           // cout<<count<<"\n";
            
            a>>=1;
            b>>=1;
            c>>=1;
        }
        
        return count;
    }
};
