/*
gfg: Sum of first n terms
link: https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1?erms
*/

#include <bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long n)
{
    if (n == 1)
        return 1;

    return n * n * n + sumOfSeries(n - 1);
}

int main()
{
    long long n;
    cin >> n;
    cout << sumOfSeries(n);
    return 0;
}