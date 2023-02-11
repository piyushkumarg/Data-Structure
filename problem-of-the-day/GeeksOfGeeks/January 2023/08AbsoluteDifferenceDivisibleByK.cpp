class Solution
{
public:
    long long countPairs(int n, int arr[], int k)
    {
        long long ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[arr[i] % k]++;

        for (auto x : mp)
        {
            long long temp = (x.second * (x.second - 1)) / 2;
            ans += temp;
        }
        return ans;
    }
};