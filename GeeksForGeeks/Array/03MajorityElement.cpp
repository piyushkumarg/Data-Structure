/*
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Method 1: Using Map
int majorityElement1(int a[], int n)
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

// Method 2: Boyer-Moore Majority Voting Algorithm
int majorityElement(int arr[], int n)
{

    int candidate = -1, votes = 0;
    // Finding majority candidate
    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == candidate)
                votes++;
            else
                votes--;
        }
    }

    // Checking if majority candidate occurs more than n/2 times
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;

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