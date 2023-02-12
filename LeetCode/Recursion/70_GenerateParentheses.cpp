/*
leetcode 22. Generate Parentheses
link: https://leetcode.com/problems/generate-parentheses/
*/

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

vector<string> ans;
void solve(string &s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        solve(s, open - 1, close);
        s.pop_back();
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            solve(s, open, close - 1);
            s.pop_back();
        }
    }
}
vector<string> generateParenthesis(int n)
{
    string s;
    solve(s, n, n);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans1 = generateParenthesis(n);
    for (auto &x : ans1)
        cout << x << endl;

    return 0;
}