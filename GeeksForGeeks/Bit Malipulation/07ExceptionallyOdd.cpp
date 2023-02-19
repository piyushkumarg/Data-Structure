/*
https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
*/

#include <bits/stdc++.h>
using namespace std;

// Method 1 - Using map
int getOddOccurrence1(int arr[], int n)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto z : m)
    {
        if (z.second & 1)
            return z.first;
    }
    return -1;
}

// Method 2 - Using XOR
int getOddOccurrence(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

// Method 3 - Using set
int getOddOccurrence2(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
            s.insert(arr[i]);
        else
            s.erase(arr[i]);
    }
    return *s.begin();
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getOddOccurrence(arr, n) << endl;
    return 0;
}