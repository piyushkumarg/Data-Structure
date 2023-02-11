class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int n = strs[0].length();
        if (strs.size() == 0 || n == 0)
            return 0;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < strs.size() - 1; j++)
            {
                if (strs[j][i] > strs[j + 1][i])
                {
                    break;
                }
            }

            if (j != strs.size() - 1)
                cnt++;
        }
        return cnt;
    }
};