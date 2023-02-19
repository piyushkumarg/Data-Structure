/*
leetcode 78. Subsets
link: https://leetcode.com/problems/subsets/
*/

// Method 1 - Recursive Approach
class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, index + 1, ans);

        // include
        output.push_back(nums[index]);
        solve(nums, output, index + 1, ans);

        output.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

// Method 2 -Bit Manipulation
class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        // (1 << n) == pow(2,n)
        for (int i = 0; i < (1 << n); i++)
        {
            vector<int> temp;
            for (int bit = 0; bit < n; bit++)
            {
                if (i & (1 << bit))
                    temp.push_back(nums[bit]);
            }
            ans.push_back(temp);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};