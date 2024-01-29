class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        
        unordered_map<int, int> mp, mp2;
        for(auto i: s)
            mp[i]++;

        for(auto i: t)
            mp2[i]++;
        
        return mp == mp2;
    }
};