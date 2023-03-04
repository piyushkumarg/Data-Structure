#include <bits/stdc++.h>
using namespace std;

int doSomething(int c[4], int a, int n)
{
    int z = 1;
    for (int i = 0; i < 4; i++)
    {
        do
            z = (z * z) % n;
        while (0);

        if (c[i] == 1)
            z = (z * a) % n;
    }
    return z;
}
/*
Ans: 0
*/
int main()
{
    int c[4] = {1, 0, 1, 1};
    int a = 2;
    int n = 8;
    cout << doSomething(c, a, n);
    return 0;
}