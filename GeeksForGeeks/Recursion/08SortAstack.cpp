/*
https://practice.geeksforgeeks.org/problems/sort-a-stack/1
*/
#include <bits/stdc++.h>
using namespace std;

// Method 1: Using Temporary Stack
/*
void sortSatck(stack<int> &s)
{
    stack<int> temp;
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        while (!temp.empty() && temp.top() > x)
        {
            s.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }

    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}
*/

// Method 2: Using Recursion
void solve(stack<int> &s, int val)
{
    if (s.empty() || s.top() < val)
    {
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    solve(s, val);
    s.push(x);
}
void sort(stack<int> &s)
{
    if (s.empty())
        return;

    int val = s.top();
    s.pop();

    sort(s);
    solve(s, val);
}

int main()
{
    int n;
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    sort(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}