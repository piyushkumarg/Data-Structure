class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        sort(costs.begin(), costs.end());
        int sum = 0;
        int cnt = 0;
        for (auto x : costs)
        {
            sum += x;
            cnt++;
            if (sum == coins)
            {
                // cout<<sum<<" equal if"<<endl;
                return cnt;
            }
            else if (sum > coins)
            {
                // cout<<sum<<" equal elseif"<<endl;
                return cnt - 1;
            }
        }
        // cout<<sum<<" outside"<<endl;
        return cnt;
    }
};