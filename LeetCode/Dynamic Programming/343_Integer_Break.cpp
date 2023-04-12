/*
leetcode 343. Integer Break
link: https://leetcode.com/problems/integer-break/

*/

// Solution 1: Recursion
class Solution
{
public:
    int solve(int idx, int sum)
    {
        if (idx <= 1)
        {
            return 1;
        }
        int ans = 1;
        if (sum >= idx)
        {
            ans = max(solve(idx, sum - idx) * idx, solve(idx - 1, sum));
        }
        else
        {
            ans = solve(idx - 1, sum);
        }
        return ans;
    }
    int integerBreak(int n)
    {
        return solve(n - 1, n);
    }
};

// Solution 2: DP

class Solution
{
public:
    vector<vector<int>> dp;
    int solve(int idx, int sum)
    {
        if (idx <= 1)
        {
            return 1;
        }

        if (dp[idx][sum] != -1)
        {
            return dp[idx][sum];
        }

        int ans = 1;
        if (sum >= idx)
        {
            ans = max(solve(idx, sum - idx) * idx, solve(idx - 1, sum));
        }
        else
        {
            ans = solve(idx - 1, sum);
        }
        return dp[idx][sum] = ans;
    }

    int integerBreak(int n)
    {
        dp.resize(n + 5, vector<int>(n + 5, -1));
        return solve(n - 1, n);
    }
};