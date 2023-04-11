/*
leetcode 188. Best Time to Buy and Sell Stock IV
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
*/

class Solution
{
public:
    vector<vector<vector<int>>> dp;
    int buySell(int idx, int canBuy, int cnt, vector<int> &prices)
    {
        int n = prices.size();
        if (idx >= n || cnt == 0)
            return 0;

        if (dp[idx][cnt][canBuy] != -1)
            return dp[idx][cnt][canBuy];

        int profit = 0;
        if (canBuy)
        {
            profit = max(buySell(idx + 1, false, cnt, prices) - prices[idx], buySell(idx + 1, canBuy, cnt, prices) - 0);
        }
        else
        {
            profit = max(buySell(idx + 1, true, cnt - 1, prices) + prices[idx], buySell(idx + 1, canBuy, cnt, prices) - 0);
        }
        return dp[idx][cnt][canBuy] = profit;
    }
    int maxProfit(int k, vector<int> &prices)
    {
        dp.resize(prices.size() + 1, vector<vector<int>>(k + 1, vector<int>(3, -1)));
        return buySell(0, 1, k, prices);
    }
};