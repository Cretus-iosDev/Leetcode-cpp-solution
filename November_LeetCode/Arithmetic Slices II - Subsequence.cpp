class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<unordered_map<long long,int>> dp(n);
        for(int end=1;end<n;end++){
            for(int start=0;start<end;start++){
                long long difference=(long long)nums[end]-(long long)nums[start];
                long long sum=0;
                if(dp[start].find(difference)!=dp[start].end()){ 
                    sum=dp[start][difference];
                }
                dp[end][difference]+=(sum+1);  // 1 is added because of subseq. {nums[start],nums[end]}
                res+=sum;
            }
        }
        return res;
    }
};