#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

// First Method
void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != v[i + 1])
            cnt++;
    }
    cout << cnt;
}

// Second Method
void Solve()
{
    int n;
    cin >> n;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size();
}

int main()
{
    fastread();
    Solve();
    return 0;
}