class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a = 0, b = -1;
        int x = INT_MAX, y = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > a) {
                b = a;
                a = nums[i];
            }
            else if(nums[i] <= a) {
                if(b == -1 || b < nums[i])
                    b = nums[i];
            }
            
            if(nums[i] < x) {
                y = x;
                x = nums[i];
            }
            else if(nums[i] >= x) {
                if(y == -1 || y > nums[i])
                    y = nums[i];
            }
        }
        return (a * b) - (x * y);
    }
};