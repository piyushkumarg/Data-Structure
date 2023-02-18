/*
https://practice.geeksforgeeks.org/problems/division-without-using-multiplication-division-and-mod-operator/0
*/

#include <bits/stdc++.h>
using namespace std;

/*
------------  O(N) solution -- Gives TLE  ------
long long divide(long long dividend, long long divisor)
{
    long long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);

    long long quotient = 0;
    while (dividend >= divisor)
    {
        dividend -= divisor;
        quotient++;
    }
    return quotient * sign;
}
*/

// O(1) solution
long long divide(long long dividend, long long divisor)
{
    long long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);

    long long quotient = 0, temp = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (temp + (divisor << i) <= dividend)
        {
            temp += divisor << i;
            quotient += 1LL << i;
        }
    }
    return quotient * sign;
}

int main()
{
    long long dividend, divisor;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor);
    return 0;
}