class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        map<char, pair<int, int>> mp;
        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) != mp.end())
                mp[s[i]].second = i;
            else
                mp[s[i]] = {i, -1};
        }
        
        int ans = -1;
        for(auto [a, b] : mp)
            if(b.second != -1)
                ans = max(ans, b.second - b.first - 1);
        return ans;
    }
};