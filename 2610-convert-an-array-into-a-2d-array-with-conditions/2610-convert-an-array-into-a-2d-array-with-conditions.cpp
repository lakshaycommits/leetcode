class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int, int> mp;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) mp[nums[i]]++;
        
        for(int i = 0; i < n; i++) {
            vector<int> temp;
            for(auto it: mp) {
                if(it.second > 0)
                    temp.push_back(it.first);
                mp[it.first] = it.second - 1;
            }
            if(temp.size() == 0) break;
            ans.push_back(temp);
        }
        
        return ans;
    }
};