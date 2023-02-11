#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007

string solve(string &s)
{
    vector<int> cnt(26);

    for (auto x : s)
        cnt[x - 'A']++;

    int check = 0;
    for (auto x : cnt)
    {
        if (x % 2 == 1)
            check++;
    }

    if (check > 1)
        return "NO SOLUTION";

    string res = "";
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 == 0)
        {
            for (int j = 0; j < cnt[i] / 2; j++)
                res += i + 'A';
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2 == 1)
        {
            for (int j = 0; j < cnt[i]; j++)
                res += i + 'A';
        }
    }

    for (int i = 26; i >= 0; i--)
    {
        if (cnt[i] % 2 == 0)
        {
            for (int j = 0; j < cnt[i] / 2; j++)
                res += i + 'A';
        }
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}