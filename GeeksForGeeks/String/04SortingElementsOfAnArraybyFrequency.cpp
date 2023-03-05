/*
https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
*/
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        vector<pair<int, int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), cmp);

        for (auto x : v)
        {
            for (int i = 0; i < x.second; i++)
            {
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}