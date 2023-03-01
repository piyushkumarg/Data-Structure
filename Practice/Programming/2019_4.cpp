#include <bits/stdc++.h>
using namespace std;

void convert(int n)
{
    if (n < 0)
        cout << n;
    else
    {
        convert(n / 2);
        cout << n % 2;
    }
}

/*
function will not print anything and will not terminate. because of it has no terminating condition.
*/

int main()
{
    int n;
    cin >> n;
    convert(n);
    return 0;
}