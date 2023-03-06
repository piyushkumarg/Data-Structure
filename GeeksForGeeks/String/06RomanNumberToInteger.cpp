/*
Roman Number to Integer
https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int romanToDecimal(string &s)
{
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int ans = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (mp[s[i]] < mp[s[i + 1]])
            ans -= mp[s[i]];
        else
            ans += mp[s[i]];
    }
    ans += mp[s[s.length() - 1]];

    return ans;
}

int main()
{


    return 0;
}