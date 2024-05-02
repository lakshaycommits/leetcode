class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n - 1;
        vector<int> ans;
        
        while(l <= h) {
            if(nums[l] + nums[h] == target)
                return {l + 1, h + 1};
            if(nums[l] + nums[h] < target)
                l++;
            else
                h--;
        }
        
        return {-1, -1};
    }
};