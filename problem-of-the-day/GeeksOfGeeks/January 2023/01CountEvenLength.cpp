
class Solution
{
private:
    int modInverse(int A, int M)
    {
        int m0 = M;
        int y = 0, x = 1;

        if (M == 1)
            return 0;

        while (A > 1)
        {
            // q is quotient
            int q = A / M;
            int t = M;

            // m is remainder now, process same as
            // Euclid's algo
            M = A % M, A = t;
            t = y;

            // Update y and x
            y = x - q * y;
            x = t;
        }

        // Make x positive
        if (x < 0)
            x += m0;

        return x;
    }

public:
    int compute_value(int n)
    {
        int res = 1;
        int mod = 1e9 + 7;
        long long ncr = 1; // nc0
        for (int r = 1; r <= n; r++)
        {
            // ncr = ((n-r+1)*ncr)/r;

            // to apply 'mod' on divide we using modInververse
            ncr = ((((n - r + 1) * ncr) % mod) * modInverse(r, mod)) % mod;

            int temp = (ncr * ncr) % mod;
            // cout<<r<<"  "<<ncr<<"  "<<temp<<endl;
            res = (res + temp) % mod;
        }
        return res;
    }
};
