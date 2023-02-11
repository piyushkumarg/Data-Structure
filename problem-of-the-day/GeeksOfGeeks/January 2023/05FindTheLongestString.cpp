class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(), words.end());

        map<string, int> mp;
        for (auto x : words)
        {
            mp[x]++;
        }

        int size = 0;
        string ans = "";
        for (auto x : words)
        {
            string temp = "";
            int cnt = 0;
            int n = x.size();

            for (int i = 0; i < n; i++)
            {
                temp += x[i];
                if (mp[temp])
                    cnt++;
            }

            // cout<<"out: "<<n<<" "<<size<<" "<<ans<<endl;
            if (cnt == n && n > size)
            {
                // cout<<n<<" "<<size<<" "<<ans<<endl;
                size = n;
                ans = x;
            }
        }
        return ans;
    }
};