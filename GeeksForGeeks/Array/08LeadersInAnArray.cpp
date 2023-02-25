/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int max_so_far = a[n - 1];
    ans.push_back(max_so_far);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max_so_far)
        {
            ans.push_back(a[i]);
            max_so_far = a[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = leaders(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}