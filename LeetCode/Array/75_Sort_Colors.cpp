/*
leetcode 75. Sort Colors
https://leetcode.com/problems/sort-colors/
*/

// Solution 1 : TC - O(n)
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for (auto x : nums)
        {
            if (x == 0)
                cnt0++;
            else if (x == 1)
                cnt1++;
            else
                cnt2++;
        }

        for (int i = 0; i < cnt0; i++)
        {
            nums[i] = 0;
        }
        for (int i = cnt0; i < cnt0 + cnt1; i++)
        {
            nums[i] = 1;
        }
        for (int i = cnt0 + cnt1; i < nums.size(); i++)
        {
            nums[i] = 2;
        }
    }
};

// Solution 2 : Using 3 pointers (TC - O(n))
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, j = 0, k = nums.size() - 1;
        while (j <= k)
        {
            if (nums[j] == 0)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if (nums[j] == 1)
            {
                j++;
            }
            else
            {
                swap(nums[j], nums[k]);
                k--;
            }
        }
    }
};