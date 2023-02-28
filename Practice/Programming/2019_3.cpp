#include <bits/stdc++.h>
using namespace std;

int main()
{
    float sum = 0.0, j = 1.0, i = 2.0;
    int cnt = 0;
    while (i / j > 0.0625)
    {
        j = j + j;
        sum = sum + i / j;
        cout << sum << " ";
        cnt++;
    }
    cout << endl
         << cnt << endl;
    return 0;
}