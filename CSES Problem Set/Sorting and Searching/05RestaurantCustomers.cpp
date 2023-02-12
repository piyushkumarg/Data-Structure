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

int solve(map<int, bool> &mp)
{
    int local_max = 0, ans = 0;
    for (auto &x : mp)
    {
        if (x.s)
            local_max++;
        else
            local_max--;

        ans = max(local_max, ans);
    }
    return ans;
}

int main()
{
    fastread();
    int n;
    cin >> n;
    map<int, bool> mp;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        mp[x] = true;
        mp[y] = false;
    }

    cout << solve(mp);
    return 0;
}

/*
    --------Naive Approach ----- Gives : TLE ---------
void solve(int low,int high,unordered_map<int,int> &mp){
    int max_p = 0;
    for(int i=low;i<=high;i++){
        int local_max = 0;
        for(auto &j:mp){
            if(i>=j.first && i<=j.second){
                local_max++;            }
        }

        max_p = max(local_max,max_p);
    }
    cout<<max_p<<endl;
}

int main(){
    fastread();
    int n,a,b;
    cin>>n;
    int low = INT_MAX,high = INT_MIN;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        mp[a] = b;
        low = min(low,a);
        high = max(high,b);
    }
    solve(low,high,mp);
    return 0;
}

*/