/*
leetcode 121. Best Time to Buy and Sell Stock
link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

// Solution 1: Brute Force TC: O(n^2)
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int max_profit = 0;
        int profit;
        for (int i = 0; i < n; i++)
        {
            int maxi = 0;
            for (int j = i + 1; j < n; j++)
            {
                maxi = max(prices[j], maxi);
            }
            profit = maxi - prices[i];
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};

// Solution 2: DP TC: O(n)
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int max_profit = 0;
        vector<int> maxi(n);
        maxi[n - 1] = prices[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            maxi[i] = max(maxi[i + 1], prices[i]);
        }

        int profit;
        for (int i = 0; i < n; i++)
        {
            profit = maxi[i] - prices[i];
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};

// Solution 3: Optimized TC: O(n)
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int max_profit = 0;
        int sell = prices[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            max_profit = max(sell - prices[i], max_profit);
            sell = max(sell, prices[i]);
        }
        return max_profit;
    }
};