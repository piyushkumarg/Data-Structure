/*
Majority vote
https://practice.geeksforgeeks.org/problems/majority-vote/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

vector<int> Solve(int n, vector<int> &nums)
{
    int cnt1 = 0, cnt2 = 0;
    vector<int> ans;
    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (first == nums[i])
            cnt1++;
        else if (second == nums[i])
            cnt2++;
        else if (cnt1 == 0)
        {
            cnt1++;
            first = nums[i];
        }
        else if (cnt2 == 0)
        {
            cnt2++;
            second = nums[i];
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == first)
            cnt1++;
        else if (nums[i] == second)
            cnt2++;
    }
    if (cnt1 > n / 3)
        ans.push_back(first);

    if (cnt2 > n / 3)
        ans.push_back(second);

    if (ans.size() == 0)
        ans.push_back(-1);

    return ans;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<int> ans = Solve(n, nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}