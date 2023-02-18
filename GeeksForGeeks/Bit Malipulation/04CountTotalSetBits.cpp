/*
https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
*/
#include <bits/stdc++.h>
using namespace std;

// n: input to count the number of set bits
// Function to return sum of count of set bits in the integers from 1 to n.
int findLargestPowerof2InRange(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x - 1;
}
int countSetBits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int x = findLargestPowerof2InRange(n);

    int bitsTill2toX = x * (1 << (x - 1));
    int bits2toXtoN = n - (1 << x) + 1;
    int rest = n - (1 << x);

    int ans = bitsTill2toX + bits2toXtoN + countSetBits(rest);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n);
    return 0;
}