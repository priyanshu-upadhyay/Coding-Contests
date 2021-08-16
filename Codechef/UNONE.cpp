#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define sb(x) __builtin_popcountll(x)
#define rall(x) (x).rbegin(), (x).rend()
#define make_unique(x)        \
    auto it = unique(all(x)); \
    x.resize(it - x.begin())

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0)
        {
            even.pb(temp);
        }
        else
        {
            odd.pb(temp);
        }
    }
    for(int i : even)
    {
        cout<<i<<" ";
    }
    for(int i : odd)
    {
        cout<<i<<" ";
    }

    
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        solve();
        cout << endl;
    }
}