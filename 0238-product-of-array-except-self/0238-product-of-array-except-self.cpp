class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), temp = 1;
        
        vector<int> ans(n, 1);
        
        for(int i = 1; i < n; i++) {
            temp *= nums[i - 1];
            ans[i] *= temp;
        }
        
        temp = 1;
        for(int i = n - 2; i >= 0; i--) {
            temp *= nums[i + 1];
            ans[i] *= temp;
        }
        
        return ans;
    }
};