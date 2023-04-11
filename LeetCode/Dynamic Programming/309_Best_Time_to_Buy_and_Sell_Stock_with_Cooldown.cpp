/*
leetcode 309. Best Time to Buy and Sell Stock with Cooldown
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
*/

// Solution 1: Recursion
class Solution
{
public:
    int buySell(int idx, int canbuy, vector<int> &stock)
    {
        int n = stock.size(), profit = 0;
        if (idx >= n)
            return 0;
        if (canbuy)
            return profit = max(buySell(idx + 1, false, stock) - stock[idx], buySell(idx + 1, canbuy, stock));
        else
            return profit = max(buySell(idx + 2, true, stock) + stock[idx], buySell(idx + 1, canbuy, stock));
        return profit;
    }
    int maxProfit(vector<int> &prices)
    {
        return buySell(0, true, prices);
    }
};



// Solution 2: DP
class Solution
{
public:
    vector<vector<int>> dp;
    int buySell(int idx, int canBuy, vector<int> &stock)
    {
        int n = stock.size(), profit = 0;
        if (idx >= n)
            return 0;

        if (dp[idx][canBuy] != -1)
        {
            return dp[idx][canBuy];
        }
        if (canBuy)
            profit = max(buySell(idx + 1, false, stock) - stock[idx], buySell(idx + 1, canBuy, stock));
        else
            profit = max(buySell(idx + 2, true, stock) + stock[idx], buySell(idx + 1, canBuy, stock));
        return dp[idx][canBuy] = profit;
    }

    int maxProfit(vector<int> &prices)
    {
        dp.resize(prices.size() + 1, vector<int>(3, -1));
        return buySell(0, true, prices);
    }
};