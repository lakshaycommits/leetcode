class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1])
                MaxProfit += prices[i] - prices[i - 1];
        return MaxProfit;
    }
};

// 0, 1, 7, 1, 5, 3, 6, 4
// 4 + 3 = 7