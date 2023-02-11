/*
Problem: Permutations
link: https://cses.fi/problemset/task/1070
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

vector<int> solve(int n)
{
    vector<int> v;
    for (int i = 2; i <= n; i += 2)
        v.pb(i);

    for (int i = 1; i <= n; i += 2)
        v.pb(i);

    return v;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> v = solve(n);
    for (auto x : v)
        cout << x << " ";

    return 0;
}