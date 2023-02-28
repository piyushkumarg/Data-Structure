#include <bits/stdc++.h>
using namespace std;

int r()
{
    static int num = 7;
    return num--;
}
/*
In for loop first it call r()        ==   7
                    then r()         ==   6
        then it prints r()          ==    5
        after that r() changes to         4
        ------
and then goes to starts of for loop  -- r() == 3
--                          prints             2
        changes to                             1
        changes to                             0
        loop break;

    therefore Output is 52
*/
int main()
{
    for (r(); r(); r())
        cout << r();
    return 0;
}