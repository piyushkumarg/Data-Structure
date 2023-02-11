#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

bool solve(int a, int b)
{
    if ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)))
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (solve(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}