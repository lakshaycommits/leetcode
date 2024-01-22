class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> vis(n + 1, 0);
        
        for(int i = 0; i < n; i++)
            vis[nums[i]]++;
            
        vector<int> ans(2, 0);
        for(int i = 1; i < n + 1; i++) {
            if(vis[i] == 2)
                ans[0] = i;
            if(vis[i] == 0)
                ans[1] = i;
        }
        return ans;
    }
};