/*
https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
const int N = 1e6 + 10;

long long power(int n, int r)
{
    if (r == 0)
        return 1;
    if (r == 1)
        return n;
    long long ans = power(n, r / 2);
    if (r % 2 == 0)
    {
        return (ans % M * ans % M) % M;
    }
    else if (r % 2 == 1)
    {
        return (n % M * ans % M * ans % M) % M;
    }
    else
    {
        return 1 / power(n, -r);
    }
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << power(n, r) << endl;
    return 0;
}