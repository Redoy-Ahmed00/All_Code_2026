#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll n , k;
    cin >> n >> k;

    vll a(k, 0);
    rep(i,0,k)
        cin >> a[i];

    vector<pair<ll,ll>> pr(n);
    rep(i,0,n)
    {
        int b;
        cin >> b;
        pr[i] = {b, i};   
    }

    sort(pr.rbegin(),pr.rend());
    vll ans;
    for(int j = 0; j < n; j++)
    {
        ll b = pr[j].first;
        ll i = pr[j].second;
        for(;b<k+1;b++)
            ans.push_back(i);
    }

    int s = ans.size();
    if(ans.size()>1000)
        cout << -1 << endl;
    else
    {
        cout << ans.size() << endl;
        for(auto &x : ans)
            cout << x+1 << ' ';
        cout << endl; 
    }
}

int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}