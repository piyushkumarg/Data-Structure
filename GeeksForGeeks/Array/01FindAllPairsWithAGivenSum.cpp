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

vector<pair<int, int>> allPairs(int a[], int b[], int n, int m, int x)
{
    sort(a, a + n);
    sort(b, b + m);
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (a[i] + b[j] == x)
            {
                ans.push_back({a[i], b[j]});
            }
        }
    }
    return ans;
}

int main()
{
    /*
    Input:
    n m x
    5 5 9
    1 2 4 5 7 --> a
    5 6 3 4 8 --> b
    */
    fastread();
    int n, m, x;
    cin >> n >> m >> x;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> ans = allPairs(a, b, n, m, x);
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}