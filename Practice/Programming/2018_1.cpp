#include <bits/stdc++.h>
using namespace std;

unsigned long int fun(unsigned long int n)
{
    unsigned long int i, j = 0, sum = 0;
    for (i = n; i > 1; i = i / 2)
        j++;
    for (; j > 1; j = j / 2)
        sum++;
    return sum;
}

int main()
{
    cout << fun(pow(2, 20));
    return 0;
}