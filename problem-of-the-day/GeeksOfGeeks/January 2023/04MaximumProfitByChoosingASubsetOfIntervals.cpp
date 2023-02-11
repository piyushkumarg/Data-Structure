// 1st solution
class Solution
{
    int binaryfun(int i, vector<vector<int>> &intervals)
    {
        int low = i + 1;
        int high = intervals.size() - 1;

        int ans = -1;
        int currend = intervals[i][1];
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (intervals[mid][0] < currend)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }
        // smallest index of the interval that having starting just greater equal to currend -> interval[i][1]
        return ans;
    }

    int solve(int i, vector<vector<int>> &intervals, vector<int> &dp)
    {
        int n = intervals.size();

        // exhausted all jobs or intervals
        if ((i == n))
        {
            return 0;
        }

        // Already calculated
        if (dp[i] != -1)
        {
            return dp[i];
        }

        int skip = solve(i + 1, intervals, dp);

        int take = intervals[i][2];

        int j = binaryfun(i, intervals);

        if (j != -1)
        {
            take += solve(j, intervals, dp);
        }

        dp[i] = max(take, skip);
        return dp[i];
    }

    int maximum_profit(int n, vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<int> dp(n, -1);
        return solve(0, intervals, dp);
    }
};

/************************************************************************************************/

// 2nd Solution
class Solution
{
public:
    static bool f(vector<int> &a, vector<int> &b)
    {
        if (a[1] < b[1])
            return true;
        else if (a[1] > b[1])
            return false;
        else
        {
            return a[0] <= b[0];
        }
    }

    int binarySearch(vector<vector<int>> &intervals, int n, int k)
    {
        int s = 0, e = n, mid, i = -1;
        while (s <= e)
        {
            mid = (s + e) / 2;
            if (intervals[mid][1] <= k)
            {
                i = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return i;
    }

    int maximum_profit(int n, vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), f);

        vector<int> ans(n, 0);
        ans[0] = intervals[0][2];
        for (int i = 1; i < n; i++)
        {
            int index = binarySearch(intervals, i - 1, intervals[i][0]);
            if (index == -1)
            {
                ans[i] = intervals[i][2];
            }
            else
            {
                ans[i] = ans[index] + intervals[i][2];
            }
            ans[i] = max(ans[i], ans[i - 1]);
        }
        return ans[n - 1];
    }
};