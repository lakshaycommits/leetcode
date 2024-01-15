class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, pair<int, int>> mp;
        
        for(auto match: matches) {
            mp[match[0]].first++;
            mp[match[1]].second++;
        }
        
        vector<vector<int>> ans(2);
        for(auto i: mp) {    
            if(i.second.second == 0)
                ans[0].push_back(i.first);
            if(i.second.second == 1)
                ans[1].push_back(i.first);
        }
        
        return ans;
        
    }
};