class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0, temp = -1;
        for(int i = n - 2; i >= 0; i--) {
            temp = max(temp, prices[i + 1]);
            ans = max(temp - prices[i], ans);
        }
        return ans;
    }
};