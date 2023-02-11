#include <bits/stdc++.h>
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        string temp = word;
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
        string upperWord = temp;

        temp = word;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        string lower = temp;

        temp = word;
        transform(temp.begin(), temp.begin() + 1, temp.begin(), ::toupper);
        string onecap = temp;

        string temp1 = onecap;
        transform(temp1.begin() + 1, temp1.end(), temp1.begin() + 1, ::tolower);
        string onecap1 = temp1;

        // cout<<upperWord<<" --low-- "<<lower<<" --ex-- "<< onecap<< " --one-- "<<onecap1<<endl;
        // cout<<word<<" --low-- "<<word<<" --ex-- "<< word<<" --one-- "<<onecap1<<endl;

        if (word == upperWord)
        {
            return true;
        }
        else if (word == lower)
        {
            return true;
        }
        else if (word == onecap)
        {
            if (onecap == onecap1)
                return true;
            else
                return false;
        }
        return false;
    }
};