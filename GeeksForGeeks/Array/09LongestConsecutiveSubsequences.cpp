/*
https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/0
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int findLongestConseqSubseq(int arr[], int n)
{
    sort(arr, arr + n);
    int ans = 0;
    int currMax = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == (arr[i - 1] + 1))
        {
            currMax++;
        }
        else if (arr[i] != arr[i - 1])
        {
            currMax = 0;
        }

        ans = max(currMax, ans);
    }
    return ans + 1;
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
    cout << findLongestConseqSubseq(a, n) << endl;
    return 0;
}