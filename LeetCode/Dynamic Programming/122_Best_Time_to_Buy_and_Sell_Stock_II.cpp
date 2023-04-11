/*
leetcode 122. Best Time to Buy and Sell Stock II
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
// Solution 1: Recursion
class Solution
{
public:
    int Buysell(int idx, int canbuy, vector<int> &stock)
    {

        int n = stock.size(), profit = 0;
        if (idx >= n)
            return 0;
        if (canbuy)
            // buy or not
            return profit = max(Buysell(idx + 1, false, stock) - stock[idx], Buysell(idx + 1, canbuy, stock) - 0);
        else
            return profit = max(Buysell(idx + 1, true, stock) + stock[idx], Buysell(idx + 1, canbuy, stock) - 0);

        return profit;
    }
    int maxProfit(vector<int> &prices)
    {
        return Buysell(0, true, prices);
    }
};


// Solution 2: DP
class Solution
{
public:
    vector<vector<int>> dp;
    int Buysell(int idx, int canbuy, vector<int> &stock)
    {

        int n = stock.size(), profit = 0;
        if (idx >= n)
            return 0;
        if (dp[idx][canbuy] != -1)
            return dp[idx][canbuy];
        if (canbuy)
            // buy or not
            profit = max(Buysell(idx + 1, false, stock) - stock[idx], Buysell(idx + 1, canbuy, stock) - 0);
        else
            profit = max(Buysell(idx + 1, true, stock) + stock[idx], Buysell(idx + 1, canbuy, stock) - 0);

        return dp[idx][canbuy] = profit;
    }
    int maxProfit(vector<int> &prices)
    {
        dp.resize(prices.size() + 1, vector<int>(2, -1));
        return Buysell(0, true, prices);
    }
};