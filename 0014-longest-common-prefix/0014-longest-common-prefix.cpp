class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        if(strs.size() == 0)
            return ans;
        
        sort(strs.begin(), strs.end());
        string fir = strs[0];
        string sec = strs[strs.size() - 1];
        
        for(int i = 0; i < fir.size(); i++) {
            if(fir[i] == sec[i])
                ans += fir[i];
            else
                break;
        }
        
        return ans;
    }
};