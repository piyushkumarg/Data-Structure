/*
Weird Algorithm
link: https://cses.fi/problemset/task/1068
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

vector<long long> solve(long long n)
{
    vector<long long> v;
    v.pb(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            v.pb(n);
        }
        else
        {
            n = n * 3 + 1;
            v.pb(n);
        }
    }
    return v;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> v = solve(n);
    for (auto x : v)
        cout << x << " ";
    return 0;
}