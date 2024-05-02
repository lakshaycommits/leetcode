class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n - 2; i++) {
            int j = i + 1, k = n - 1, target = -nums[i];
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            
            while(j < k) {
                int sum = nums[j] + nums[k];
                if(sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j + 1] == nums[j]) j++;
                    while(j < k && nums[k - 1] == nums[k]) k--;
                    j++; k--;
                }
                else if(sum < target) j++;
                else k--;
            }
        }
        
        return ans;
    }
};