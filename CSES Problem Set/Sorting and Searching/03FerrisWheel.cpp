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
    ll n, x;
    cin >> n >> x;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    int i = 0, j = n - 1;
    int cnt = 0;
    while (i <= j)
    {
        if (p[j] + p[i] > x)
            j--;
        else
        {
            i++;
            j--;
        }
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}