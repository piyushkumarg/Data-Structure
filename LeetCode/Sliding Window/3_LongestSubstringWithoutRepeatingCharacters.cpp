/*
leetcode 3. Longest Substring Without Repeating Characters
link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxi = INT_MIN;
        if (s == "")
            return 0;
        if (s == " ")
            return 1;
        int n = s.size();
        int i = 0, j = 0;
        vector<int> arr(128, 0);
        while (j < n)
        {
            arr[s[j]]++;
            while (i < n && arr[s[j]] != 1)
            {
                arr[s[i]]--;
                i++;
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};