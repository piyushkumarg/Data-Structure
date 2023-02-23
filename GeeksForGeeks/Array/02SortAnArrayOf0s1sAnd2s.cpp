/*
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

void sort012(int arr[], int n)
{
    int i = 0, j = 0, k = n - 1;
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main()
{
    fastread();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}