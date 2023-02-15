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

// if we travel from median of sorted array then we got minimum cost.
ll solve(vector<ll> &arr, int &n)
{
    sort(arr.begin(), arr.end());
    ll median = arr[n / 2];

    ll result = 0;
    for (auto &x : arr)
    {
        result += abs(median - x);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    cout << solve(arr, n);

    return 0;
}
