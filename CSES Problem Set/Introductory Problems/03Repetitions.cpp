/*
Repetitions
link: https://cses.fi/problemset/task/1069
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

int solve(string &s)
{
    int cnt = 0, crr = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cnt = max(cnt, crr);
            crr = 0;
        }

        crr++;
    }
    cnt = max(cnt, crr);
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}