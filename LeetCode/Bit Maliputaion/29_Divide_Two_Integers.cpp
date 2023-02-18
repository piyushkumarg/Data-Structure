/*
leetcode 29. Divide Two Integers
link: https://leetcode.com/problems/divide-two-integers/
*/

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1)
        {
            return INT_MIN;
        }
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long long dd = abs(dividend);
        long long dv = abs(divisor);

        int ans = 0;
        while (dv <= dd)
        {
            long long sum = dv, count = 1;
            while (sum <= dd - sum)
            {
                sum += sum;
                count += count;
            }
            ans += count;
            dd -= sum;
        }
        return ans * sign;
    }
};