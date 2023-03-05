/*
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

// Method1
string reverseWords1(string s)
{
    vector<string> temp;
    string t = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            t += s[i];
        else if (s[i] == '.')
        {
            temp.push_back(t);
            t = "";
        }
    }
    temp.push_back(t);

    string ans = "";
    for (int i = temp.size() - 1; i > 0; i--)
    {
        ans += temp[i];
        ans += ".";
    }
    ans += temp[0];
    return ans;
}

/*******        method2: Using stack       **********/

string reverseWords2(string s)
{
    stack<string> temp;
    string t = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            t += s[i];
        else if (s[i] == '.')
        {
            temp.push(t);
            temp.push(".");
            t = "";
        }
    }
    temp.push(t);

    string ans = "";
    while (!temp.empty())
    {
        ans += temp.top();
        temp.pop();
    }

    return ans;
}

/********            method3: Optimized                     ********/
string reverseWords(string s)
{
    int left = 0;
    int right = s.length() - 1;

    string temp = "";
    string ans = "";

    // Iterate the string and keep on adding to form a word
    // If empty space is encountered then add the current word to the result
    while (left <= right)
    {
        char ch = s[left];
        if (ch != '.')
        {
            temp += ch;
        }
        else if (ch == '.')
        {
            if (ans != "")
                ans = temp + "." + ans;
            else
                ans = temp;
            temp = "";
        }
        left++;
    }

    // If not empty string then add to the result(Last word is added)
    if (temp != "")
    {
        if (ans != "")
            ans = temp + "." + ans;
        else
            ans = temp;
    }

    return ans;
}

int main()
{
    fastread();
    string s;
    cin >> s;
    cout << reverseWords(s) << endl;

    return 0;
}