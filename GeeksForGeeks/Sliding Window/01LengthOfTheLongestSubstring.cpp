/*
https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1
*/
#include <bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Method 1: brute force
// time complexity: O(n^2)
int longestUniqueSubsttr1(string s)
{
    int ans = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        unordered_set<int> set;
        for (int j = i; j < s.length(); j++)
        {
            if (set.find(s[j]) != set.end())
            {
                break;
            }
            else
            {
                ans = max(ans, j - i + 1);
                set.insert(s[j]);
            }
        }
    }
    return ans;
}

// Method 2: Sliding window
int longestUniqueSubsttr(string s)
{
    int maxi = INT_MIN;
    int n = s.size();
    int i = 0, j = 0;
    vector<int> arr(26, 0);
    while (j < n)
    {
        arr[s[j] - 'a']++;
        while (i < n && arr[s[j] - 'a'] != 1)
        {
            arr[s[i] - 'a']--;
            i++;
        }
        maxi = max(maxi, j - i + 1);
        j++;
    }
    return maxi;
}

int main()
{
    fastread();
    string s;
    cin >> s;
    cout << longestUniqueSubsttr(s);
    return 0;
}