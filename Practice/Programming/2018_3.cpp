#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int count(int x, int y)
{
    if (y != 1)
    {
        if (x != 1)
        {
            ans++;
            count(x / 2, y); // --> runs 10 times
        }
        else
        {
            y = y - 1;
            count(1024, y); // --> runs 1023 times
        }
    }
}
/*
therefore ans = 10*1023 = 10230
*/

int main()
{
    int x = 1024, y = 1024;
    count(x, y);
    cout << ans;
    return 0;
}