/*
leetcode 91. Decode Ways
link: https://leetcode.com/problems/decode-ways/
*/

// Solution 1: Recursion
class Solution
{
public:
    int solve(string s, int idx)
    {
        int n = s.size();
        if (idx == n)
            return 1;

        if (s[0] == 0)
            return 0;

        int digit = s[idx] - '0';
        if (digit >= 1)
        {
            if (idx + 1 < n)
            {
                int digit2 = 10 * digit + s[idx + 1] - '0';
                if (digit2 >= 1 && digit2 <= 26)
                {
                    return solve(s, idx + 1) + solve(s, idx + 2);
                }
                else
                    return solve(s, idx + 1);
            }
            else
            {
                return solve(s, idx + 1);
            }
        }
        return 0;
    }
    int numDecodings(string s)
    {
        return solve(s, 0);
    }
};

// Solution 2: DP
class Solution
{
public:
    vector<int> dp;
    int solve(string s, int idx)
    {
        int n = s.size();
        if (idx == n)
            return 1;

        if (s[0] == 0)
        {
            return 0;
        }

        if (dp[idx] != -1)
        {
            return dp[idx];
        }

        int digit = s[idx] - '0';
        if (digit >= 1)
        {
            if (idx + 1 < n)
            {
                int digit2 = 10 * digit + s[idx + 1] - '0';
                // digit2 lies between 1 to 26
                if (digit2 >= 1 && digit2 <= 26)
                {
                    return dp[idx] = solve(s, idx + 1) + solve(s, idx + 2);
                }
                else
                    return dp[idx] = solve(s, idx + 1);
            }
            else
            {
                return dp[idx] = solve(s, idx + 1);
            }
        }
        return 0;
    }
    int numDecodings(string s)
    {
        dp.resize(s.size() + 1, -1);
        return solve(s, 0);
    }
};