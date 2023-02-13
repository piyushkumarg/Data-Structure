/*
Leetcode 231. Power of Two
Given an integer, write a function to determine if it is a power of two.
link: https://leetcode.com/problems/power-of-two/
*/

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;

    if ((n & n - 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n) << endl;
    return 0;
}