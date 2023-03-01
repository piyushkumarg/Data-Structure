/*
https://leetcode.com/problems/subarray-sum-equals-k/
*/

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        unordered_map<int, int> mp; // Key = PrefixSUM, Value = Count of PrefixSUM.
        int currSUM = 0;
        int i = 0;
        int ans = 0;

        while (i < n)
        {
            currSUM += nums[i];

            if (currSUM == k)
                ans++;

            if (mp.find(currSUM - k) != mp.end())
                ans += mp[currSUM - k];

            mp[currSUM]++;
            i++;
        }
        return ans;
    }
};