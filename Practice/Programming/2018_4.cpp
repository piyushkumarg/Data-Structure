#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int counter = 0;
int calc(int a, int b)
{
    int c;
    counter++;
    if (b == 3)
    {
        // cout << "return through if block" << a << " -- " << b << endl;
        return (a * a * a);
    }
    else
    {
        c = calc(a, b / 3);
        // cout << "return through else block" << a << " -- " << b << endl;
        return (c * c * c);
    }
}

int main()
{
    calc(4, 81);
    printf("%d", counter);
    cout << "\n--------------------------------\n";
    // cout << calc(4, 81);
    return 0;
}