class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;
        for(auto it: nums)
            mp[it]++;
        
        int ans = 0;
        for(auto [a, b]: mp) {
            if(b == 1)
                return -1;
            ans += (b / 3);
            if(b % 3) ans++;
        }
        
        return ans;
    }
};