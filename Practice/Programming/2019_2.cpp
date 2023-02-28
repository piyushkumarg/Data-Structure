#include <bits/stdc++.h>
using namespace std;

int r()
{
    static int num = 7;
    return num--;
}

int main()
{
    for (r(); r(); r())
        cout << r();
    return 0;
}