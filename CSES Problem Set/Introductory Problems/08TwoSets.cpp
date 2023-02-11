/*
Two Sets
link: https://cses.fi/problemset/task/1092
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

ll sum(ll n)
{
    return n * (n + 1) / 2;
}

int main()
{
    ll n;
    cin >> n;
    if (sum(n) % 2 == 1)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES" << endl;
    ll s1 = 0, s2 = 0;
    vector<ll> v1, v2;
    for (ll i = n; i >= 1; i--)
    {
        if (s1 <= s2)
        {
            v1.pb(i);
            s1 += i;
        }
        else
        {
            v2.pb(i);
            s2 += i;
        }
    }

    cout << v1.size() << endl;
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    cout << v2.size() << endl;
    for (auto x : v2)
        cout << x << " ";

    return 0;
}