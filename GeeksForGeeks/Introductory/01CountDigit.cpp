/*
Count Digits
Given a number N. Count the number of digits in N which evenly divides N.
https://practice.geeksforgeeks.org/problems/count-digits5716/1
*/

#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n)
{
    int cnt = 0;
    int temp = n;
    while (temp)
    {
        int digit = temp % 10;
        if (digit != 0 && n % digit == 0)
            cnt++;
        temp /= 10;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    cout << evenlyDivides(n);
    return 0;
}