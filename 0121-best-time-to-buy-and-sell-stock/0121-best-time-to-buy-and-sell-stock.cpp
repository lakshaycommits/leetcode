class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> max_(n, -1);
        int ans = 0;
        int temp = -1;
        for(int i = n - 2; i >= 0; i--) {
            temp = max(temp, prices[i + 1]);
            max_[i] = temp;
        }
        for(int i = 0; i < n; i++)
            ans = max(ans, max_[i] - prices[i]);
        return ans;
    }
};