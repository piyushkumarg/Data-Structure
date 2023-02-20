#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string s, int l, int r)
{

    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;
    return isPallindrome(s, l + 1, r - 1);
}

int main()
{
    string s;
    cin >> s;
    cout << isPallindrome(s, 0, s.length() - 1);
    return 0;
}