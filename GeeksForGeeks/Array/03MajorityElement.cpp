/*
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Method 1: Using Map
int majorityElement(int a[], int n)
{

    unordered_map<int, int> temp;
    for (int i = 0; i < n; i++)
    {
        temp[a[i]]++;
    }
    int N = n / 2;
    for (auto x : temp)
    {
        if (x.second > N)
            return x.first;
    }
    return -1;
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
    cout << majorityElement(a, n) << endl;

    return 0;
}