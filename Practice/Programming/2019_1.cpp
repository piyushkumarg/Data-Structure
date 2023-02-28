#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 4, 6, 8, 10};
    int i, sum = 0, *b = a + 4;
    for (i = 0; i < 5; i++)
    {
        sum = sum + (*b - i) - *(b - i);
        // cout << "(*b-i) = " << (*b - i) << "  -- *(b-i) = " << *(b - i) << "and Sum = " << sum << endl;
    }
    cout << endl
         << endl
         << sum << endl;
    return 0;
}

/*
Output : 10
Explanation:
(*b-i) = 10  -- *(b-i) = 10and Sum = 0
(*b-i) = 9  -- *(b-i) = 8and Sum = 1
(*b-i) = 8  -- *(b-i) = 6and Sum = 3
(*b-i) = 7  -- *(b-i) = 4and Sum = 6
(*b-i) = 6  -- *(b-i) = 2and Sum = 10
*/