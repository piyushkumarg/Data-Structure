/*
leetcode 1752. Check if Array Is Sorted and Rotated
link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
*/

// method 1
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }

        if (nums[n - 1] > nums[0])
            count++;

        if (count <= 1)
            return true;

        return false;
    }
};

// method 2
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }

        if (count <= 1)
            return true;

        return false;
    }
};