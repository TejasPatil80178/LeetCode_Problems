class Solution {
public:
    
    
    int climbStairs(int n) {
        //// Recursize Solution
     /*   if(n==0) return 1;
        int x = 0;
        int y = 0;
        if(n-1 >= 0) x += climbStairs(n-1);
        if(n-2 >= 0) y += climbStairs(n-2);
        return (x+y) */
        
        
        //DP Solution
        if(n<=3) return n;
        
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};
