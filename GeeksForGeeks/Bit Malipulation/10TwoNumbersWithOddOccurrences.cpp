/*
https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1
*/
#include <bits/stdc++.h>
using namespace std;

// Method 1 - Using map
/*
vector<long long int> twoOddNum(long long int arr[], long long int N)
{
    map<long long, long long> m;

    for (int i = 0; i < N; i++)
    {
        m[arr[i]]++;
    }

    vector<long long> v;
    for (auto x : m)
    {
        if (x.second & 1 == 1)
        {
            v.push_back(x.first);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}
*/

// Method 2 - Using XOR
vector<long long int> twoOddNum(long long int arr[], long long int n)
{

    vector<long long> ans;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp ^ arr[i];
    }

    // To find set bit number
    int cnt = 0;
    while (temp)
    {
        if (temp & 1)
            break;
        cnt++;
        temp = temp >> 1;
    }
    int setbit_no = 1 << cnt;

    // or
    // int setbit_no = temp & ~(temp-1);

    /* ************* */
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & setbit_no)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }
    ans.push_back(x);
    ans.push_back(y);

    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<long long int> v = twoOddNum(arr, n);
    for (auto x : v)
        cout << x << " ";
    return 0;
}