/*
Maximum Nesting Depth of the Parentheses
https://practice.geeksforgeeks.org/problems/maximum-nesting-depth-of-the-parentheses/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int maxDepth(string s)
{
    int n = s.length();
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            temp++;
        else if (s[i] == ')')
            temp--;
        ans = max(ans, temp);
    }
    return ans;
}

int main()
{

    fastread();
    string s;
    cin >> s;
    cout << maxDepth(s) << endl;

    return 0;
}