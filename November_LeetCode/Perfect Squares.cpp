class Solution {
public:
    int numSquares(int n) {
       vector<int> dp(n+1, 0 );
        for(int x=1;x<=n; ++x){
            int min_val = x; //Take all 1s
            int y = 1, sq = 1;
            while(sq<=x){
                min_val = min(min_val, 1 + dp[x-sq]);
                y++;
                sq = y*y;
            }
            dp[x] = min_val;
        }
        return dp[n];
    }
};