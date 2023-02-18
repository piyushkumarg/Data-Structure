/*
https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n)
{
    if (n <= 0)
        return false;

    if ((n & n - 1))
        return false;

    return true;
}

int main()
{
    long long n;
    cin >> n;
    if (isPowerofTwo(n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}