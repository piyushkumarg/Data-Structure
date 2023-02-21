/*
https://practice.geeksforgeeks.org/problems/maximum-consecutive-ones/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int longestOnes(int n, vector<int> &nums, int k)
{
    int cntZero = 0;
    int ans = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            cntZero++;
        }
        while (cntZero > k)
        {
            if (nums[j++] == 0)
            {
                cntZero--;
            }
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}

int main()
{
    fastread();
    int n, k;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    cout << longestOnes(n, nums, k) << endl;
    return 0;
}