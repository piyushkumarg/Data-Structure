class Solution
{
public:
    int removeStudents(int H[], int N)
    {
        vector<int> ans;
        ans.push_back(H[0]);

        for (int i = 1; i < N; i++)
        {
            if (H[i] > ans.back())
                ans.push_back(H[i]);
            else
            {
                int id = lower_bound(ans.begin(), ans.end(), H[i]) - ans.begin();
                ans[id] = H[i];
            }
        }
        return N - ans.size();
    }
};