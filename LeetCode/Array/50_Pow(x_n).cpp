class Solution
{
    /*
    leetcode 50. Pow(x, n)
    https://leetcode.com/problems/powx-n/
    */

    // Solution 1 : Using built in function
public:
    double myPow(double x, int n)
    {
        return pow(x, n);
    }
};

// Solution 2 : Using recursion
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
            return ans * ans;
        else if (n % 2 == 1)
            return x * ans * ans;
        else
            return (1 / myPow(x, -n));
    }
};

// Solution 3 : Using iteration
class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long long temp = n;
        if (temp < 0)
            temp = -1 * temp;

        while (temp)
        {
            if (temp % 2)
            {
                ans = ans * x;
                temp--;
            }
            else
            {
                x = x * x;
                temp /= 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};