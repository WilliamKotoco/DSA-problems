class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_sub = 0;
        int min_price = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            max_sub = max(max_sub, prices[i] - min_price);
            min_price = min(min_price, prices[i]);
        }

        return max_sub;
    }
};
