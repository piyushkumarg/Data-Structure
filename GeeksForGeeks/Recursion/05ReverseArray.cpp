#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

int main()
{
    vector<int> v = {5, 6, 7, 8, 9, 10};
    reverseArray(v, 0, v.size() - 1);
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}