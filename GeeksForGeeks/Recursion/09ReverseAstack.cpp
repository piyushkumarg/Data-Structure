/*
https://practice.geeksforgeeks.org/problems/reverse-a-stack/1
*/
#include <bits/stdc++.h>
using namespace std;

// Method 1: Using recursion
void solve(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    solve(s, val);
    s.push(x);
}
void Reverse(stack<int> &St)
{
    if (St.empty())
        return;

    int val = St.top();
    St.pop();

    Reverse(St);
    solve(St, val);
}

int main()
{
    int n;
    stack<int> St;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        St.push(x);
    }
    while (!St.empty())
    {
        cout << St.top() << " ";
        St.pop();
    }
    cout << endl
         << "after" << endl;
    Reverse(St);
    // print stack
    while (!St.empty())
    {
        cout << St.top() << " ";
        St.pop();
    }
    return 0;
}