/*
Missing Number
link: https://cses.fi/problemset/task/1083
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
    ll ans = 1;
    for (ll i = 2; i <= n; i++)
    {
        ans += i;
        ans -= v[i - 2];
    }
    return ans;
}

int main()
{
    fastread();
    ll n;
    vector<ll> v;
    cin >> n;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    cout << solve(v, n);
    return 0;
}