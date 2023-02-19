/*
https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
*/
#include <bits/stdc++.h>
using namespace std;

/*
we have to calulate the number of bits to be flipped to convert a to b

for this we can use the XOR operator
a ^ b = c
now we have to count the number of set bits in c

*/

int countSetBits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n &= (n - 1);
    }
    return cnt;
}

int countBitsFlip(int a, int b)
{
    int ans = countSetBits(a ^ b);
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << countBitsFlip(a, b) << endl;
    return 0;
}