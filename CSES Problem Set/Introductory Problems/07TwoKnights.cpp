/*
Two Knights
link: https://cses.fi/problemset/task/1072
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

ll solve(ll i)
{
    ll total_combination = (i * i) * ((i * i) - 1) / 2;
    ll attacking_knights = 4 * (i - 1) * (i - 2);
    return total_combination - attacking_knights;
}

int main()
{
    fastread();
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << solve(i) << endl;
    }
    return 0;
}