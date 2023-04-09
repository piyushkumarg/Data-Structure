/*
leetcode 1. Two Sum
https://leetcode.com/problems/two-sum/
*/

// Solution 1 : Brute Force (TC- O(n^2))
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                    continue;
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// Solution 2 : Using Hashmap (TC- O(nlongn))
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
                return {mp[target - nums[i]], i};
            else
                mp[nums[i]] = i;
        }
        return {};
    }
};

//