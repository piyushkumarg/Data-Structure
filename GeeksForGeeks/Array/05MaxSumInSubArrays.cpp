/*
https://practice.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

long long pairWithMaxSum(long long arr[], long long n)
{
    long long res = INT_MIN, currSum = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        currSum = arr[i] + arr[i + 1];
        res = max(res, currSum);
    }
    return res;
}

int main()
{
    fastread();
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << pairWithMaxSum(a, n) << endl;

    return 0;
}