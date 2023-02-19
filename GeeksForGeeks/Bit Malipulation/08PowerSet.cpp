/*
https://practice.geeksforgeeks.org/problems/power-set4302/1
*/

#include <bits/stdc++.h>
using namespace std;

/*
METHOD 1 - Using recursion
Time Complexity: O(2^n)
-------------------------

void solve(string &s, string output, int index, vector<string> &ans)
{
    if (index >= s.size())
    {
        if (output.size() > 0)
            ans.push_back(output);
        return;
    }

    // exclude
    solve(s, output, index + 1, ans);

    // include
    output.push_back(s[index]);
    solve(s, output, index + 1, ans);

    output.pop_back();
}
vector<string> AllPossibleStrings(string s)
{
    vector<string> ans;
    string output;
    int index = 0;
    solve(s, output, index, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
*/

// METHOD 2 - Using Bit Manipulation
vector<string> AllPossibleStrings(string s)
{
    vector<string> ans;
    int n = s.length();
    // (1 << n) == pow(2,n)
    for (int i = 1; i < (1 << n); i++)
    {
        string temp;
        for (int bit = 0; bit < n; bit++)
        {
            if (i & (1 << bit))
                temp.push_back(s[bit]);
        }
        ans.push_back(temp);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = AllPossibleStrings(s);
    for (auto z : ans)
        cout << z << " ";
    return 0;
}