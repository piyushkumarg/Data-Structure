#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 5}, *ip = arr + 4;
    cout << ip[1] << endl;
    /*
    Explanation:
    ip[1] = *(ip + 1) = *(arr + 4 + 1) = arr[5] = 6
    */
    return 0;
}