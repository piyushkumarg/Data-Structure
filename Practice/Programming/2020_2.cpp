#include <bits/stdc++.h>
using namespace std;

int tob(int b, int *arr)
{
    int i;
    for (i = 0; b > 0; i++)
    {
        if (b % 2)
            arr[i] = 1;
        else
            arr[i] = 0;
        b = b / 2;
    }
    return i;
}

int pp(int a, int b)
{
    int arr[20];
    int i, tot = 1, ex, len;
    ex = a;
    len = tob(b, arr);

    for (i = 0; i < len; i++)
    {
        if (arr[i] == 1)
            tot = tot * ex;
        ex = ex * ex;
    }
    return tot;
}

int main()
{
    cout << pp(3, 4);
    return 0;
}

/*
We call pp(3,4) then --> a=3 and b=4
we pass len = tob(4, arr) then we move to tob function
and do operations
    b%2 i.e 4%2 == 0 so that arr[0] = 0
    and b = b/2 --> b becomes 2
    2%2 == 0 so that arr[1] = 0 and
    Now b beomes 1
    1%2 == 1 so that arr[1] = 1
    ans b becomes 0
    and i becomes 3

    so that len = 3 and
    arr[0]=0
    arr[1]=0
    arr[2]=1

    After doing operatin in pp function we get answer 81.
*/