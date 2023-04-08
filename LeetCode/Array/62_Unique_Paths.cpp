/*I
leeetcode: 62. Unique Paths
link: https://leetcode.com/problems/unique-paths/
*/

// Solution 1 : Using recursion (TC- exponential)
class Solution
{
public:
    int countPath(int m, int n, int i, int j)
    {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        else
            return countPath(m, n, i + 1, j) + countPath(m, n, i, j + 1);
    }
    int uniquePaths(int m, int n)
    {
        return countPath(m, n, 0, 0);
    }
};

// Solution 2 : Using DP (TC- O(m*n))
class Solution
{
public:
    int countPath(int m, int n, int i, int j, vector<vector<int>> &dp)
    {
        if (i == m - 1 && j == n - 1)
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] = countPath(m, n, i + 1, j, dp) + countPath(m, n, i, j + 1, dp);
    }
    int uniquePaths(int m, int n)
    {
        vector<int> temp(n, -1);
        vector<vector<int>> dp(m, temp);

        return countPath(m, n, 0, 0, dp);
    }
};

// Solution 3 : combination (TC- O(m-1) or O(n-1))
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int N = m + n - 2;
        int r = m - 1;
        // calulating nCr
        double res = 1;
        for (int i = 1; i <= r; i++)
        {
            res = res * (N - r + i) / i;
        }
        return (int)res;
    }
};