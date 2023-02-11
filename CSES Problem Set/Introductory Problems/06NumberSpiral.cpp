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
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans;
        if (x > y)
        {
            if (x % 2 == 0)
                ans = x * x - y + 1;
            else
                ans = (x - 1) * (x - 1) + y;
        }
        else
        {
            if (y % 2 == 0)
                ans = (y - 1) * (y - 1) + x;
            else
                ans = y * y - x + 1;
        }
        cout << ans << endl;
    }
    return 0;
}