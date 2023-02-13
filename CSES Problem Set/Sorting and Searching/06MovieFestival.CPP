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

int solve(vector<pair<int, int>> &movies)
{
    int curr_end = 0, ans = 0;
    for (auto x : movies)
    {
        if (x.s >= curr_end)
        {
            curr_end = x.f;
            ans++;
        }
    }
    return ans;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        movies.pb(mp(y, x));
    }
    sort(movies.begin(), movies.end());

    cout << solve(movies);
    return 0;
}