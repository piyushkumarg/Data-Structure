#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

string maxOdd(string s)
{
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if ((s[i] - '0') & 1)
        {
            ans = s.substr(0, i + 1);
            return ans;
        }
    }
    return ans;
}

int main()
{
    fastread();
    string s = "4106";
    cout << maxOdd(s);

    return 0;
}