class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), l = 0, r = 0;
        int ans = 0;
        map<char, int> mp;
        while(r < n) {
            mp[s[r]]++;
            
            int max_ = -1;
            for(auto [a, b]: mp)
                max_ = max(max_, b);
            
            int window = r - l + 1;

            if(window - max_ <= k)
                ans = max(window, ans);
            else
                while(((r - l + 1) - max_) > k) {
                    mp[s[l]]--;
                    l++;
                }
            r++;
        }
        return ans;
        
    }
};