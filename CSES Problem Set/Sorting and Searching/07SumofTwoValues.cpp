#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ipair pair<int, int>
#define llpair pair<ll, ll>
#define mp make_pair
#define f first
#define s second
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        arr.pb(mp(tem, i + 1));
    }
    sort(arr.begin(), arr.end());

    int fi = 0, l = arr.size() - 1;
    while (l - fi >= 1)
    {
        if (arr[fi].f + arr[l].f == x)
        {
            cout << arr[fi].s << " " << arr[l].s << endl;
            return;
        }
        else if (arr[l].f + arr[fi].f > x)
            l--;
        else
            fi++;
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    fastread();
    solve();
    return 0;
}
// if we  take max element what is mimimum sum
// then pick min element
// f+l ==sum
// f+l l--;
// s++;