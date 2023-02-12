/*
gfg: Print N to 1 without using loop

*/

#include <bits/stdc++.h>
using namespace std;

void printNos(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    printNos(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printNos(n);
    return 0;
}