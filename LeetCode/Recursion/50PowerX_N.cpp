/*
leetcode 50. Pow(x, n)
link: https://leetcode.com/problems/powx-n/
*/

// Method 1 - iterative approach
// time complexity: O(logn)
class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long nn = n;
        if (nn < 0)
            nn = -1 * nn;
        while (nn)
        {
            if (nn % 2)
            {
                ans = ans * x;
                nn = nn - 1;
            }
            else
            {
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};

// method 2 - recursive approach
class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        double ans = myPow(x, n / 2);
        if (n % 2 == 0)
        {
            return ans * ans;
        }
        else if (n % 2 == 1)
        {
            return x * ans * ans;
        }
        else
        {
            return 1 / myPow(x, -n);
        }
    }
};