class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n, 1), s(n, 1);
        int temp = 1;
        
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
        
        // vector<int> ans;
        // for(int i = 0; i < n; i++)
            // ans.push_back(s[i] * p[i]);
        
        return ans;
    }
};