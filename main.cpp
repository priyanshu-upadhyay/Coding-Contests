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
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#define precision(x) cout << fixed << setprecision(x);
#else
#define debug(x)
#endif

void _print(int t)
{
    cerr << t;
}
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

void solve()
{
    int n;
    cin>>n;
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        cin>>pos[i];
    }
    if(n == 1&pos[0] == 0)
    {
        cout<<1<<" "<<2;
        return;
    }
    vector<int> arr[n+1];
    for (int i = 0; i < n; i++)
    {
        if(pos[i] == 0)
        {
            arr[i].pb(n);
        }
        else
        {
            arr[n].pb(i);
        }
    }


//     for (int i = 0; i < n+1; i++)
//     {
//         cout<<i+1<<" : ";
//         for(auto j : arr[i])
//         {
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }

// cout<<endl;
    int f = 0;
    vector<int> seq;
    for(int j : arr[n])
    {
        if(j == 0)
        {
            f = 1;
            cout<<n+1<<" ";
            for (int k = 1; k < n+1; k++)
            {
                cout<<k<<" ";
            }
        }
        else if(arr[j-1].size() != 0 && arr[j-1][0] == n)
        {
            f = 1;
            for (int i = 1; i <= j; i++)
            {
                cout<<i<<" ";
            }
            
            cout<<n+1<<" "<<j+1<<" ";
            for (int i = j+2; i < n+1; i++)
            {
                cout<<i<<" ";
            }
            break;
        }

    }
    if(f == 0)
    {
        cout<<-1;
    }
    
    
    
    // cout<<endl;

    
    

}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
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