#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int i, sum = 0, *b = a + 4;
    for (i = 0; i < 5; i++)
    {
        cout << "{ (*b-i) } --> " << (*b - i) << "  -- { *(b-i) } --> " << *(b - i) << endl;
        sum = sum + (*b - i) - *(b - i);
    }
    cout << endl
         << endl
         << sum << endl;
    return 0;
}