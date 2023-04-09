/*
leetcode 18. 4Sum
https://leetcode.com/problems/4sum/
*/

// Solution 1 : Brute Force (TC- O(n^4))
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> res;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> ans;
        long long sum;
        for (int i = 0; i < n - 3; ++i)
        {
            for (int j = i + 1; j < n - 2; ++j)
            {
                for (int k = j + 1; k < n - 1; ++k)
                {
                    for (int l = k + 1; l < n; ++l)
                    {
                        sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                        if (sum > target)
                            break;
                        else if (sum == target)
                        {
                            vector<int> t;
                            t.push_back(nums[i]);
                            t.push_back(nums[j]);
                            t.push_back(nums[k]);
                            t.push_back(nums[l]);
                            ans.insert(t);
                        }
                    }
                }
            }
        }

        for (auto it : ans)
            res.push_back(it);
        return res;
    }
};
