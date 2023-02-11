class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        map<int, int> mp;

        for (auto x : tasks)
        {
            mp[x]++;
        }

        int cnt = 0;
        for (auto x : mp)
        {
            int i = x.second;

            if (i == 1)
                return -1;
            else if (i % 3 == 0)
                cnt += i / 3;
            else if (i % 3 == 1 || i % 3 == 2)
                cnt += i / 3 + 1;
        }
        return cnt;
    }
};