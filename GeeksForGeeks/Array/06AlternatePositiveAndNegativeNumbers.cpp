/*
https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

void rearrange(int arr[], int n)
{
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size())
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // for remaining positive element
    while (i < pos.size())
    {
        arr[k++] = pos[i++];
    }

    // for remaining negative element
    while (j < neg.size())
    {
        arr[k++] = neg[j++];
    }
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
    rearrange(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}