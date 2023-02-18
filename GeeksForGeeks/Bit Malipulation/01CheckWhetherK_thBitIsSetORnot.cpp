/*
https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
*/

#include <bits/stdc++.h>
using namespace std;

/*
    n = 13 k =2
    output yes

    Exp:
        1 1 0 0 1
        0 1 0 0 0 ---> mask which is create using --> ( 1 << k)

    if(n & mask == true)
        return true
    else return false

*/
bool checkKthBit(int n, int k)
{
    int mask = 1 << k;
    if (n & mask)
        return true;

    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    if (checkKthBit(n, k))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}