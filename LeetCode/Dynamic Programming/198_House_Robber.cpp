/*
leetcode 198. House Robber
link: https://leetcode.com/problems/house-robber/

*/

// Solution 1:Using Recursion

class Solution
{
public:
    int solve(int idx, vector<int> &nums)
    {
        int n = nums.size();
        if (idx >= n)
        {
            return 0;
        }
        return max(solve(idx + 2, nums) + nums[idx], solve(idx + 1, nums));
    }
    int rob(vector<int> &nums)
    {
        return solve(0, nums);
    }
};

// Solution 2: Using DP
class Solution
{
public:
    vector<int> dp;
    int solve(int idx, vector<int> &nums)
    {
        int n = nums.size();
        if (idx >= n)
        {
            return 0;
        }

        if (dp[idx] != -1)
            return dp[idx];
        // if we rob the current house then we can't rob the next house
        return dp[idx] = max(solve(idx + 2, nums) + nums[idx], solve(idx + 1, nums));
    }

    int rob(vector<int> &nums)
    {
        dp.resize(nums.size() + 1, -1);
        return solve(0, nums);
    }
};