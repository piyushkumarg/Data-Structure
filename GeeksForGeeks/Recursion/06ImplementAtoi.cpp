/*
https://practice.geeksforgeeks.org/problems/implement-atoi/1
*/
#include <bits/stdc++.h>
using namespace std;

// method 1  - Using iterative approach
int atoiItr(string str)
{
    int n = str.length();

    int ans = 0, temp = 1, flag = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            ans += temp * (str[i] - '0');
            temp *= 10;
        }
        else
        {
            if (i == 0 && str[i + 1] >= '0' && str[i + 1] <= '9' && str[i] == '-')
                ans = -ans;
            else
                return -1;
        }
    }
    return ans;
}

// method 2 - Using recursion
int atoiRecur(string &str, int sign, int i, int result)
{
    if (i >= str.size())
    {
        return sign * result;
    }

    if (str[i] < '0' or str[i] > '9')
        return -1;

    int tmp = str[i] - '0';
    return atoiRecur(str, sign, i + 1, result * 10 + tmp);
}

int atoi(string str)
{
    int i = 0, sign = 1;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    return atoiRecur(str, sign, i, 0);
}

int main()
{
    string str;
    cin >> str;
    cout << atoi(str) << endl;
    return 0;
}