/*
Trailing Zeros
link: https://cses.fi/problemset/task/1618
*/
* /
#include <bits/stdc++.h>
    using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int findTrailingZeros(int n)
{
    int count = 0;
    while (n >= 5)
    {
        n /= 5;
        count += n;
    }

    return count;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    cout << findTrailingZeros(n);

    return 0;
}