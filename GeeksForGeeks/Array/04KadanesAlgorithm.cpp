#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Kadane's Algorithmlong
long maxSubarraySum(int arr[], int n)
{
    long long ans = INT_MIN;
    long long currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        ans = max(ans, currSum);

        if (currSum < 0)
            currSum = 0;
    }
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
    cout << maxSubarraySum(a, n) << endl;
    return 0;
}