/*
https://practice.geeksforgeeks.org/problems/outermost-parentheses/1
*/
#include <bits/stdc++.h>
using namespace std;

// Method1
string removeOuter1(string &s)
{
    string ans = "";
    int cnt = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '(' && cnt >= 0)
        {
            ans += s[i];
            cnt++;
        }
        else if (s[i] == ')' && cnt > 0)
        {
            ans += s[i];
            cnt--;
        }
        else if (s[i] == ')' && cnt == 0)
        {
            if (i < s.size())
            {
                i++;
            }
        }
    }
    return ans;
}

// Method2 : Using stack
string removeOuter(string &s)
{
    string ans;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (st.size() > 0)
                ans.push_back(s[i]);
            st.push(s[i]);
        }
        else
        {
            st.pop();
            if (!st.empty())
            {
                ans.push_back(s[i]);
            }
        }
    }
    return ans;
}

int main()
{
    string s = "(()())(())";
    cout << removeOuter(s) << endl;

    return 0;
}