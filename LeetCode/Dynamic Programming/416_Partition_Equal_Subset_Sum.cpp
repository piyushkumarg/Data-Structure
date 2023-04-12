/*
leetcode 416. Partition Equal Subset Sum
link: https://leetcode.com/problems/partition-equal-subset-sum/
*/

// Solution 1: Recursion
class Solution
{
public:
    bool checkCombination(int idx, int target, vector<int> &nums)
    {
        int n = nums.size();
        if (target == 0)
            return true;
        if (idx == n - 1)
            return nums[idx] == target;

        if (nums[idx] <= target)
            // take or not take
            return (checkCombination(idx + 1, target - nums[idx], nums) || checkCombination(idx + 1, target, nums));
        else
            return checkCombination(idx + 1, target, nums);
    }

    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (auto x : nums)
        {
            sum += x;
        }
        if (sum % 2 != 0)
        {
            return false;
        }

        return checkCombination(0, sum / 2, nums);
    }
};

// Solution 2: DP
class Solution
{
public:
    vector<vector<int>> dp;
    bool checkCombination(int idx, int target, vector<int> &nums)
    {
        int n = nums.size();
        if (target == 0)
            return true;
        if (idx == n - 1)
            return nums[idx] == target;

        if (dp[idx][target] != -1)
        {
            return dp[idx][target];
        }

        if (nums[idx] <= target)
            // take or not take
            return dp[idx][target] = (checkCombination(idx + 1, target - nums[idx], nums) || checkCombination(idx + 1, target, nums));
        else
            return dp[idx][target] = (checkCombination(idx + 1, target, nums));
    }

    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (auto x : nums)
        {
            sum += x;
        }

        if (sum % 2 != 0)
        {
            return false;
        }

        dp.resize(nums.size() + 5, vector<int>(sum + 1, -1));
        return checkCombination(0, sum / 2, nums);
    }
};