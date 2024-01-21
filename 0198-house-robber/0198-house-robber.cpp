class Solution {
public:
    int f(vector<int>& nums, int i, int n, vector<int>& dp) {
        if(i == n)
            return 0;
        if(i == n - 1)
            return nums[i];
        
        if(dp[i] != -1)
            return dp[i];
        
        int t = nums[i] + f(nums, i + 2, n, dp);
        int nt = f(nums, i + 1, n, dp);
        
        return dp[i] = max(t, nt);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return f(nums, 0, n, dp);
    }
};