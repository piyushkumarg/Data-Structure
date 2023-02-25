/*
https://practice.geeksforgeeks.org/problems/next-permutation5226/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Next Permutation
// method 1: Using inbuilt function
vector<int> nextPermutation1(int N, vector<int> arr)
{
    next_permutation(arr.begin(), arr.end());
    return arr;
}

// method 2
vector<int> nextPermutation(int n, vector<int> arr)
{
    int k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (arr[k] < arr[k + 1])
        {
            break;
        }
    }

    if (k < 0)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (arr[l] > arr[k])
            {
                break;
            }
        }
        swap(arr[k], arr[l]);
        reverse(arr.begin() + k + 1, arr.end());
    }
    return arr;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = nextPermutation(n, a);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}