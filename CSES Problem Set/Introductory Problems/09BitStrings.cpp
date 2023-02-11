/*
Bit Strings
link: https://cses.fi/problemset/task/1617
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int main()
{
    fastread();
    ll n;
    cin >> n;
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans * 2) % M;
    }
    cout << ans;
    return 0;
}