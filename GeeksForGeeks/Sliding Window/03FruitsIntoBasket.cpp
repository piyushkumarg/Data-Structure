/*
https://practice.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int totalFruits(int n, vector<int> &fruits)
{
    map<int, int> mp;
    int i = 0;
    int j = 0;
    int ans = INT_MIN;
    while (j < n)
    {
        mp[fruits[j]]++;
        if (mp.size() < 2)
        {
            ans = max(ans, (j - i + 1));
            j++;
        }
        else if (mp.size() == 2)
        {
            ans = max(ans, (j - i + 1));
            j++;
        }
        else if (mp.size() > 2)
        {
            while (mp.size() > 2)
            {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0)
                {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            if (mp.size() == 2)
            {
                ans = max(ans, (j - i + 1));
            }
            j++;
        }
    }
    return ans;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    vector<int> fruits(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fruits[i];
    }
    cout << totalFruits(n, fruits) << endl;
    return 0;
}