/*
leetcode 123. Best Time to Buy and Sell Stock III
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

*/

// Solution 1: Recursion
class Solution
{
public:
    int buySell(int idx, int canBuy, int cnt, vector<int> &prices)
    {
        int n = prices.size();
        if (idx >= n || cnt == 0)
            return 0;

        int profit = 0;
        if (canBuy)
        {
            return profit = max(buySell(idx + 1, false, cnt, prices) - prices[idx], buySell(idx + 1, canBuy, cnt, prices) - 0);
        }
        else
        {
            return profit = max(buySell(idx + 1, true, cnt - 1, prices) + prices[idx], buySell(idx + 1, canBuy, cnt, prices) - 0);
        }
        return profit;
    }
    int maxProfit(vector<int> &prices)
    {
        return buySell(0, 1, 2, prices);
    }
};

// Solution 2: DP
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
    int maxProfit(vector<int> &prices)
    {
        dp.resize(prices.size() + 1, vector<vector<int>>(3, vector<int>(3, -1)));
        return buySell(0, 1, 2, prices);
    }
};