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
Method - 1
------  Recursive Approach  -----------
int solve(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans += solve(n - i);
    }
    return ans;
}
*/

// Method 2 - Modified Method1 (Recursive Approach)
int solve(int n, vector<int> &dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans += solve(n - i, dp);
        ans %= M;
    }
    return dp[n] = ans;
}

// Method 3 - Iterative Approach
int iteSolve(int n)
{
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6 and (i - j) >= 0; j++)
            dp[i] = (dp[i] + dp[i - j]) % M;
    }

    return dp[n];
}

int main()
{
    fastread();
    int n;
    cin >> n;
    // vector<int> dp(n + 1, -1);
    // cout << solve(n, dp);
    cout << iteSolve(n);
    return 0;
}
