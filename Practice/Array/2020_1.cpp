#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a[4][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20}};

    printf("%d\n", *(*(a + **a + 2) + 3));
    return 0;
}
/*
Ans 19
Explanation:
**a = 1
*(a + **a + 2) =  *(a + 1 + 2) = *(a + 3) = a[3]
*(*(a + **a + 2) +3) = *(*(a + 3) + 3) = a[3][3] = 19
*/