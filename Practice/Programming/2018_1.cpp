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

/*
first for loop deal with value of j;
for (i = n; i > 1; i = i / 2)
        j++;

when n=2^40, i=2^40, j=40 === log(2^40)=40



second for loop deal with value of sum;
for (; j > 1; j = j / 2)
        sum++;

when j=40, sum=0
when j=20, sum=1
when j=10, sum=2
when j=5, sum=3
when j=2, sum=4

so, sum=4
*/

int main()
{
    cout << fun(pow(2, 20));
    return 0;
}