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
    int n;
    cin >> n;
    vll a(n), b(n), c;
    set<ll> s;
    rep(i,0,n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    rep(i,0,n)
    {
        cin >> b[i];
        s.insert(b[i]);
    }

    ll sq = 1, mxs = LLONG_MIN;
    map<ll,ll> ma, mb;

    for(ll i = 0; i < n;)
    {
        ll j = i;
        while (j < n && a[j] == a[i]) j++;

        ma[a[i]] = max(ma[a[i]], (ll)(j - i));

        i = j;
    }

    for(ll i = 0; i < n;)
    {
        ll j = i;
        while (j < n && b[j] == b[i]) j++;

        mb[b[i]] = max(mb[b[i]], (ll)(j - i));

        i = j;
    }

    ll ans = LLONG_MIN;

    for(auto x : s)
    {
        ans = max(ans, ma[x]+mb[x]);
    }

    cout << ans << nl;

    
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