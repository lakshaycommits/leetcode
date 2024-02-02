class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans = 0;
        if(n == 0) return ans;
        int cur = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i + 1])
                continue;
            if(nums[i] + 1 == nums[i + 1])
                cur++;
            else
                cur = 0;
            ans = max(ans, cur);
        }
        return ans + 1;
    }
};