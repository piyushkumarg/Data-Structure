/*
leetcode 2220. Minimum Bit Flips to Convert Number

link: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

*/

class Solution
{
public:
    int countSetBits(int n)
    {
        int cnt = 0;
        while (n)
        {
            cnt++;
            n &= n - 1;
        }
        return cnt;
    }
    int minBitFlips(int start, int goal)
    {
        int ans = countSetBits(start ^ goal);
        return ans;
    }
};