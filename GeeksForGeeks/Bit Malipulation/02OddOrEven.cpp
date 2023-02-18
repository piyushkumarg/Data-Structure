/*
https://practice.geeksforgeeks.org/problems/odd-or-even3618/1
*/

#include <bits/stdc++.h>
using namespace std;

string oddEven(int N)
{
    if (N & 1)
        return "odd";
    return "even";
}

int main()
{
    int n;
    cin >> n;
    cout << n << " is " << oddEven(n);
    return 0;
}