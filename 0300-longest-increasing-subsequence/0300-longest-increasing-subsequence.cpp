class Solution {
public:
    int lis(vector<int>& nums, vector<vector<int>>& dp, int i, int last, int n) {
        if(i == n)
            return 0;
        
        if(dp[i][last + 1] != -1)
            return dp[i][last + 1];
        
        int t = INT_MIN;
        if(last == -1 || nums[i] > nums[last])
            t = 1 + lis(nums, dp, i + 1, i, n);
        
        int nt = lis(nums, dp, i + 1, last, n);
        
        return dp[i][last + 1] = max(t, nt);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> memo(n, vector<int>(n + 1, -1));
        return lis(nums, memo, 0, -1, n);
    }
};