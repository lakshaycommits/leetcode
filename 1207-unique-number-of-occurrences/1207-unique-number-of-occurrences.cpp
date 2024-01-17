class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        set<int> st;
        int n = arr.size();
        for(auto i: arr)
            mp[i]++;
        for(auto [a, b]: mp)
            if(st.find(b) != st.end())
                return false;
            else
                st.insert(b);
        return true;
    }
};