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
        cout << "sum = " << sum << endl;
        cnt++;
    }
    cout << endl
         << cnt << endl;
    return 0;
}

/*
Answer : 5
Explanation:
sum = 1
sum = 1.5
sum = 1.75
sum = 1.875
sum = 1.9375
*/