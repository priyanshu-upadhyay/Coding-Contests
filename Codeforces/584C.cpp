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
    int n, t;
    cin>>n>>t;
    string s1, s2, rslt = "";
    cin>>s1>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


    int arr[26] ={0};
    for (int i = 0; i < n; i++)
    {
        arr[(int)s1[i]-97]++;
        arr[(int)s2[i]-97]++;
    }




    string ans_str = "";


    int same = (n-t);
    int same2 = (n-t);
    int i = 0;
    while (same>0 && i<n)
    {
        if(arr[(int)s1[i]-97] == 1)
        {
            ans_str += s1[i];
            same--;
        }
        else if(arr[(int)s1[i]-97] == 2)
        {
            ans_str += s1[i];
            same--;
            same2--;
            arr[(int)s1[i]-97] == 3;
        }
        i++;
    }
    i = 0;
    while (same2>0 && i<n)
    {
        if(arr[(int)s2[i]-97] == 1)
        {
            ans_str += s2[i];
            same2--;
        }
        i++;
    }

    i = 0;
    t = n - ans_str.size();
    while (t>0 && i<24)
    {
        if(arr[i] == 0)
        {
            ans_str += (char) (i+97);
            t--;
        }
        i++;
    }
    if(ans_str.length() == n)
    {
        cout<<ans_str;
    }
    else
    {
        cout<<-1;
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
    // cin >> t;
    for (int test = 0; test < t; test++)
    {
        solve();
        cout << endl;
    }
}