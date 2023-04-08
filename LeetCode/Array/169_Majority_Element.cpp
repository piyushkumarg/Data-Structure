/*
leetcode 169. Majority Element
https://leetcode.com/problems/majority-element/

*/

// Solution 1 : Using Hashmap
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (auto x : nums)
            mp[x]++;

        for (auto x : mp)
        {
            if (x.second > nums.size() / 2)
                return x.first;
        }
        return -1;
    }
};

// Solution 2 : Moore's Voting Algorithm
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Moore voting algorithm
        int candidate;
        int vote = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (vote == 0)
            {
                candidate = nums[i];
                vote = 1;
            }
            else
            {
                if (nums[i] == candidate)
                    vote++;
                else
                    vote--;
            }
        }

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (candidate == nums[i])
                cnt++;
        }
        if (cnt > nums.size() / 2)
            return candidate;

        return -1;
    }
};