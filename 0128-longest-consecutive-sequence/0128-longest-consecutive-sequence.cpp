class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        unordered_set<int> st;
        int ans = 1;
        for(auto i: nums)
            st.insert(i);
        
        for(auto i: nums) {
            if(st.find(i - 1) == st.end()) {
                int cur = 1, x = i;
                while(st.find(x + 1) != st.end()) {
                    x++;
                    cur++;
                }
                ans = max(ans, cur);
            }
        }
        
        return ans;
    }
};