class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), max_ = -1;
        vector<int> ans(n, -1);
        for(int i = n - 1; i >= 0; i--) {
            ans[i] = max_;
            max_ = max(arr[i], max_);
        }
        return ans;
    }
};