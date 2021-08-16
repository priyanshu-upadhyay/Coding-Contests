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
#define yes "Yes"
#define no "No"
using namespace std;

void solve()
{
    
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    int c = 0;
    map<int,int> dup;
    for(auto i: mp)
    {
        if(i.second>k)
        {
            c = c + k;
            dup[i.first];
        }
        else
        {
            c = c + i.second;
        }
    }
    // cout<<c%k;
    int ans[n] = {0};
    for (int i = 0; i < n-c%k; i++)
    {
        if(dup.find(v[i])!=dup.end())
        {
            if(dup[v[i]]<k)
            {
                ans[i] = 1;
                dup[v[i]]++;
            }
        }
        else
        {
            ans[i] = 1;
        }
        
    }
    // for (int i = 0; i < n; i++)
    
    // {
    //     cout<<ans[i]<<" ";
    // }
    // int color = c/k;
    // int l = 0;
    // for (int i = 1; i <= k; i++)
    // {
    //     for (int j = 0; j < color; )
    //     {
    //         if(ans[l]==1)
    //         {
    //             ans[l] = i;
    //             j++;

    //         }
    //         l++;
    //     }
        
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    
    
    
    
    

    
    
    
    
    
}

int32_t main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        solve();
        cout << "\n";
    }
}