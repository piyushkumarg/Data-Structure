#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ipair pair<int, int>
#define llpair pair<ll, ll>
#define mp make_pair
#define f first
#define s second
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define M 1000000007
const int N = 1e6 + 10;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> tickets;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tickets[x]++;
    }

    for (int i = 0; i < m; i++)
    {
        int curr;
        cin >> curr;
        auto it = tickets.upper_bound(curr);
        if (it != tickets.begin())
        {
            --it;
            cout << (*it).f << endl;
            --(*it).s;
            if ((*it).s == 0)
                tickets.erase(it);
        }
        else
        {
            cout << "-1" << endl;
                }
    }
    return 0;
}