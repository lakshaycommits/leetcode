class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> mp;
        set<int> st;
        
        for(auto &match: matches) {
            int i = match[0], j = match[1];
            st.insert(i);
            st.insert(j);
            mp[j]++;
        }
        
        set<int> s;
        vector<int> sec;
        for(auto [a, b]: mp) {
            s.insert(a);
            if(b == 1)
                sec.push_back(a);
        }
        
        vector<int> fir;
        for(auto i: st)
            if(s.find(i) == s.end())
                fir.push_back(i);
        
        return {fir, sec};
    }
};