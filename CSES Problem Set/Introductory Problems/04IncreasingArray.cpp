/*
Increasing Array
link: https://cses.fi/problemset/task/1094
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

ll solve(vector<ll> &v, ll &n)
{
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    return ans;
}

int main()
{
    fastread();
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    cout << solve(v, n);
    return 0;
}