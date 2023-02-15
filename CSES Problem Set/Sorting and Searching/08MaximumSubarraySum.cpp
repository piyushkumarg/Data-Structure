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

/*

-1 3 -2 5 3 -5 2 2
*/

ll solve(vector<ll> &arr, int n)
{
    ll max_sum = INT_MIN, max_end = 0;
    for (auto x : arr)
    {
        max_end += x;
        if (max_sum < max_end)
        {
            max_sum = max_end;
        }
        if (max_end < 0)
        {
            max_end = 0;
        }
    }
    return max_sum;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << solve(arr, n);
    return 0;
}