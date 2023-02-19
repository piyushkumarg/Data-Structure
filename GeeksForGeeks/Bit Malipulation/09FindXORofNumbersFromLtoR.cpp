/*
https://practice.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1
*/
#include <bits/stdc++.h>
using namespace std;

// Method 1 Naive Approach
// Time Complexity: O(r-l)
/*
int findXOR(int l, int r)
{
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        ans ^= i;
    }
    return ans;
}
*/

// Method 2 - Using Bit Manipulation
// Time Complexity: O(1)
int findXORtillN(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    if (n % 4 == 3)
        return 0;
}

int findXOR(int l, int r)
{
    int XORtillL = findXORtillN(l - 1);
    int XORtillR = findXORtillN(r);
    int ans = XORtillL ^ XORtillR;
    return ans;
}

int main()
{
    int l, r;
    cin >> l >> r;
    cout << findXOR(l, r) << endl;

    return 0;
}