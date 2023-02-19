/*
leetcode 136. Single Number
link: https://leetcode.com/problems/single-number/
*/

// method 1 - using map
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for (auto z : m)
        {
            if (z.second == 1)
                return z.first;
        }
        return -1;
    }
};

// method 2 - using XOR
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};

// method 3 - using set
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) == s.end())
                s.insert(nums[i]);
            else
                s.erase(nums[i]);
        }
        return *s.begin();
    }
};