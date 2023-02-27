/*
leetcode 189. Rotate Array
link: https://leetcode.com/problems/rotate-array/
*/

// method 1
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp;

        if (k > n)
            k = k % n;

        for (int i = n - k; i < n; i++)
        {
            temp.push_back(nums[i]);
        }
        for (int i = 0; i < n - k; i++)
        {
            temp.push_back(nums[i]);
        }

        nums = temp;
    }
};

// method 2
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = nums[i];
        }

        nums = temp;
    }
};

// method 3
class Solution
{
public:
    void rotate(vector<int> &v, int k)
    {
        k = k % v.size();
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());
    }
};