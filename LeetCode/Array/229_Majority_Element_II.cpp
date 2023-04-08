/*
leetcode 229. Majority Element II
https://leetcode.com/problems/majority-element-ii/
*/

// Solution 1 : Using Hashmap
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto x : nums)
            mp[x]++;

        for (auto x : mp)
        {
            if (x.second > nums.size() / 3)
                ans.push_back(x.first);
        }
        return ans;
    }
};

// Solution 2 : Moore's Voting Algorithm
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        // Moore voting algorithm
        int num1 = INT_MIN, num2 = INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        for (auto x : nums)
        {
            if (num1 == x)
            {
                cnt1++;
            }
            else if (num2 == x)
            {
                cnt2++;
            }
            else if (cnt1 == 0)
            {
                num1 = x;
                cnt1 = 1;
            }
            else if (cnt2 == 0)
            {
                num2 = x;
                cnt2 = 1;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = 0, cnt2 = 0;
        for (auto x : nums)
        {
            if (num1 == x)
            {
                cnt1++;
            }
            if (num2 == x)
            {
                cnt2++;
            }
        }
        if (cnt1 > nums.size() / 3)
        {
            ans.push_back(num1);
        }
        if (cnt2 > nums.size() / 3)
        {
            ans.push_back(num2);
        }
        return ans;
    }
};