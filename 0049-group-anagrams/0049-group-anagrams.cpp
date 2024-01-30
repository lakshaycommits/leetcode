class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        for(auto i: strs) {
            string s = i;
            sort(s.begin(), s.end());
            mp[s].push_back(i);
        }
        
        for(auto [a, b]: mp) {
            ans.push_back(b);
        }
        return ans;
    }
};


// sorted -> {un1, un2, un3}

// aet -> {eat, tea, ate}

// ant -> {tan, nat}

// abt -> {bat}

