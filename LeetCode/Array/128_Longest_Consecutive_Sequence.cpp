/*
leetcode 128. Longest Consecutive Sequence
https://leetcode.com/problems/longest-consecutive-sequence/
*/

// Solution 1 : TC - O(nlogn)
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int ans = 0, currMax = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + 1)
                currMax++;
            else if (nums[i] != nums[i - 1])
                currMax = 0;

            ans = max(ans, currMax);
        }
        return ans + 1;
    }
};

// Solution 2 : Using set (TC - O(n))
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        int longest = 1;
        unordered_set<int> st;
        for (auto x : nums)
        {
            st.insert(x);
        }

        for (auto x : st)
        {
            if (st.find(x - 1) == st.end())
            {
                int cnt = 1;
                int temp = x;
                while (st.find(temp + 1) != st.end())
                {
                    temp = temp + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
