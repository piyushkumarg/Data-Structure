/*
leetcode 322. Coin Change
link: https://leetcode.com/problems/coin-change/
*/

// Solution 1: Recursion
class Solution
{
public:
    int reqCoins(int idx, vector<int> &coins, int amount)
    {
        int n = coins.size();
        if (idx >= n && amount == 0)
        {
            return 0;
        }
        if (idx >= n || amount < 0)
        {
            return INT_MAX - 10;
        }

        int ans;
        // NOT select coins
        if (coins[idx] > amount)
        {
            ans = reqCoins(idx + 1, coins, amount);
        }
        else
        {
            // select coins or Not select coins
            ans = min(1 + reqCoins(idx, coins, amount - coins[idx]), reqCoins(idx + 1, coins, amount));
        }
        return ans;
    }
    int coinChange(vector<int> &coins, int amount)
    {
        int ans = reqCoins(0, coins, amount);
        return (ans == INT_MAX - 10) ? -1 : ans;
    }
};

// Solution 2: DP
class Solution
{
public:
    vector<vector<int>> dp;
    int reqCoins(int idx, vector<int> &coins, int amount)
    {
        int n = coins.size();
        if (idx >= n && amount == 0)
        {
            return 0;
        }
        if (idx >= n || amount < 0)
        {
            return INT_MAX - 10;
        }

        if (dp[idx][amount] != -1)
        {
            return dp[idx][amount];
        }

        int ans;
        // NOT select coins
        if (coins[idx] > amount)
        {
            ans = reqCoins(idx + 1, coins, amount);
        }
        else
        {
            // select coins or Not select coins
            ans = min(1 + reqCoins(idx, coins, amount - coins[idx]), reqCoins(idx + 1, coins, amount));
        }
        return dp[idx][amount] = ans;
    }
    int coinChange(vector<int> &coins, int amount)
    {
        dp.resize(coins.size() + 5, vector<int>(amount + 5, -1));
        int ans = reqCoins(0, coins, amount);
        return (ans == INT_MAX - 10) ? -1 : ans;
    }
};